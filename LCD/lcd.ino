//https://wokwi.com/projects/400197194123687937
#include <Wire.h>
#include <LiquidCrystal_I2C.h>

// Thiết lập địa chỉ của màn hình LCD I2C
#define LCD_ADDRESS 0x27 // Địa chỉ này có thể khác nhau tùy thuộc vào module bạn đang sử dụng

// Khởi tạo màn hình LCD
LiquidCrystal_I2C lcd(LCD_ADDRESS, 16, 2); // 16x2 LCD

int location = 3; 
int minutes = 0 ;
int seconds = 0;
int *ptr_minutes = &minutes ;
int *ptr_seconds = &seconds;

class Button{
  private:
    int time_get = 300 ;
    int length = 3 ;
    int button_pins[3] ={10 , 9, 8};
  public:
  void setButton();
  bool getvalue( int n );
};

Button button ;

void Button::setButton(){
  for( int i = 0 ; i < length ; i++)pinMode(button_pins[i] , INPUT_PULLUP);
}
bool Button::getvalue( int n ){
  bool value =  false ;
  for ( int i = 0 ; i < time_get ; i += 5 ){
    if ( digitalRead(button_pins[n]) == 0 )value = true ;
    delay(5);
  }
  return value ;
}


// LCD
class LCD{
  public:
  void setLCD(); // setup 
  void XY( int x , int y); // set location
  void clear() ;
  void State_1(); // print name of students 
  void State_2(); // print name of teacher 
  void State_3(); // print set time countdown
  void Effect( int location); // 
};

LCD myLCD ;

void LCD::setLCD(){
  Wire.begin();
  lcd.begin(16,2);
}
void LCD::XY(int x , int y){
  lcd.setCursor(x,y);
}
// normal 
void LCD::State_1 (){
  XY(0,0);
  lcd.print("Ng Tuan Anh 3258");
  XY(0,1);
  lcd.print("Bui Thanh       ");
}
void LCD::clear(){
  XY(0,0);
  lcd.print("                 ");
  XY(0,1);
  lcd.print("                 ");
}
void LCD::State_2 (){
  XY(0,0);
  lcd.print("Teacher : ^.^");
  XY(3,1);
  lcd.print("Vu Song Tung");
}
// set time 
void LCD::State_3(){
  lcd.setCursor(1,0);
  lcd.print("Countdown : >.<");
  lcd.setCursor(7,1);
  lcd.print(":");
}
void LCD::Effect( int lo ){
  //int location = 3 ;
  lcd.setCursor(lo , 1);
  lcd.print('[');
  lcd.setCursor(lo + 3, 1);
  lcd.print(']');
  delay(300);
  lcd.setCursor(lo , 1);
  lcd.print(' ');
  lcd.setCursor(lo + 3, 1);
  lcd.print(' ');
  delay(50);
}
void checkout( int *ptr , int lo){
  int mi = *ptr ;
    lcd.setCursor(lo , 1);
    if ( mi < 10){
      lcd.print(0);
      lcd.setCursor(lo + 1 , 1);
    }
    lcd.print(mi);

    while ( button.getvalue(0) == true) {
      mi++;
      mi %= 60 ;
      lcd.setCursor(lo , 1);
      if ( mi < 10){
        lcd.print(0);
        lcd.setCursor(lo + 1 , 1);
      }
      lcd.print(mi);
    }
    while ( button.getvalue(1) == true) {
      mi--;
      if ( mi == -1 )mi =59 ;
      lcd.setCursor(lo , 1);
      if ( mi < 10){
        lcd.print(0);
        lcd.setCursor(lo + 1 , 1);
      }
      lcd.print(mi);
    }
    *ptr = mi ;
}
void GET( ){
  int check = 0;
  if ( button.getvalue(2)== true){
    check = 1 ;
    myLCD.clear();
    myLCD.State_3();
  }
  while(check > 0){
    
    int lo ;
    while ( check == 1){
      lo = location + 1;
      myLCD.Effect(lo - 1);
      checkout(ptr_minutes , lo);
      if( button.getvalue(2) == true ) check ++ ;
      
    }
    while ( check == 2){
      lo = location + 6 ;
      myLCD.Effect(lo - 1);
      checkout(ptr_seconds, lo);
      if( button.getvalue(2) == true ) {delay(500);check = 0;}
    }
    break;
  }
}

void setup() {
  Serial.begin(9600);
  myLCD.setLCD();
  button.setButton();
}
void RES (){
  for ( int i = 0 ; i  < 5 ; i++){
    GET();
    myLCD.State_1();
    delay(1);
  }
  myLCD.clear();
  for ( int i = 0 ; i  < 5 ; i++){
    GET();
    myLCD.State_2();
    delay(1);
  }
  Serial.println(*ptr_minutes);
}



void loop() {
  RES();
  
}

