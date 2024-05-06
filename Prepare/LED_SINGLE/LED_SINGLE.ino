const int length = 9;
const int time_function = 200 ;
const int time = 300 ;
int led[length] = { 13 , 12 , 11 , 10 , 9 , 8, 7, 6, 5};
void setup(){
  Serial.begin(115200);
  for ( int i = 0 ; i < length ; i++)pinMode(led[i] , OUTPUT);
}
void L2R_ON(int val, int len){
  if(len == 1) len = length-1;
  for ( int i = length-1 ; i >= 0 ; i--){
    digitalWrite(led[abs(len-i)] , 1);
    delay(time_function );
    digitalWrite(led[abs(len-i)], val);
  }
  OFF_ALL();
}
void OFF_ALL(){
  for ( int i = 0  ; i < length ; i++)digitalWrite(led[i], 0);
}

void MIX(int val ){
  for ( int i = 0 ; i < length ; i +=2)digitalWrite(led[i] , 1 - val);
  for ( int i = 1 ; i < length ; i +=2)digitalWrite(led[i] , val );
}
void loop(){
  L2R_ON(1,0);
  delay(time);
  L2R_ON(0,0);
  L2R_ON(0,1);
  L2R_ON(0,0);
  L2R_ON(0,1);
  delay(time);
  L2R_ON(1,1);
  delay(time);
  for ( int i = 0 ; i< 10; i++){
    MIX(1);
    delay(time);
    MIX(0);
    delay(time);
  }
}