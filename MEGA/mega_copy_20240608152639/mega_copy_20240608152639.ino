#include "Port.h"
#include "Process.h"
#include<Arduino_FreeRTOS.h>

int seconds = 10 ;
int *ptr_seconds = &seconds ;
float minutes = 1;

///
void TaskBlinkSEG(void *pvParameters);
void TaskBlinkLED(void *pvParameters);
void TaskBlinkLCD(void *pvParameters);

///

byte pins[] = { 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, // 10 led blue thẳng
                23, 24, 25, 27, 29, 31, 33, 35, //8 led blue chéo
                16, 3, 17, 18, 19, A4, A5, 37, 39, 41, // 10 led green thẳng
                43, 45, 47, 49, 51, 53, 26, 28,   // 8 led green chéo
                14, 30, 32, 34, 36, 38, 40, 42, 44, 46, // 10 led red thẳng
                48, 50, 52, 22, 15, 0, 1, 2  // 8 led red chéo
};
byte pins7[] = { A3, A6, A7, A8, A9, A10, A11, A12, A13, A14, A15 };

const int numPins = sizeof(pins) / sizeof(byte);
const int rePins = numPins - N;
const int ledcolor = 18;
const int brightness = 255;

Port led(N, 1);
Port ledblue(N, 1);
Port ledgreen(N, 1);
Port ledred(N, 1);
Port ctr(N, 1);

class Sevseg: Port {
    public:
      Sevseg(byte* pins7, bool anode = true):
        Port(7, anode ? 0 : 1) {
            Port::Connect(pins7, OUTPUT);
        }
      
      void Display(byte digit) {
        static byte code[] = {
          0x3F, 0x06, 0x5B, 0x4F, 0x66, 0x6D, 0x7D, 0x07, 0x7F, 0x6F };
        Port::Write(code[digit]);
      }

};

class Effect {
  private:
    Port& port;
  public:
    Effect(Port& port): port(port) {};
    void Mode(int fp, int lp) {
      Fill1().Run(port);
      for (int i = fp; i < lp; i++) {
        port.Off(pins[i]);
        delay(timer);
        port.On(pins[i + N]);
        delay(timer);
      }
    }
    void Offled() {
      for (int j = 1; j < 5; j++) {
      port.Off(pins[rePins + j - 1]);
      delay(timer);
      }
    }
    void SEled(int fp, int lp, int mode) {
      for (int i = fp; i < lp; i++) {
      if (mode == 0) {
        port.Off(pins[i]);
      } else port.On(pins[i]);
      delay(30);
      }
    }
};

Sevseg ss(pins7, 1);
Effect Mode1(led);
Effect Mode2(ledblue);
Effect Mode3(ledgreen);
Effect Mode4(ledred);

void setup() {
  Serial.begin(9600);
  ctr.Connect(pins7 + 7, OUTPUT);
  led.Connect(pins, OUTPUT);
  ledblue.Connect(pins, OUTPUT);
  ledgreen.Connect(pins + ledcolor, OUTPUT);
  ledred.Connect(pins + ledcolor * 2, OUTPUT);
  // 13h10 8/6/2024 
  ///
  //Serial.begin(9600);
  myLCD.setLCD();
  //button.setButton();
  xTaskCreate(TaskBlinkSEG , " SEG ", 128 , NULL , 1 , NULL);
  xTaskCreate(TaskBlinkLED , " LED ", 128 , NULL , 1 , NULL);
  xTaskCreate(TaskBlinkLCD , " LCD ", 128 , NULL , 1 , NULL);

  vTaskStartScheduler();

  ///
}



void time(byte mns, int index) {
  ss.Display(mns);
  ctr.Set(index);
  delay(timer);
  ctr.Reset(index);
}

long v = 0;


void LED(){
  // ntuanh
  
  //int time_delay = minutes * 1000 ;
  //time_delay *= 60 ;
  //Serial.println(time_delay);
  //delay( time_delay );
  //delay( time_delay );
  
  Mode1.Mode(0, rePins);
  Mode1.Offled();

  Mode2.SEled(0, ledcolor, brightness);
  Mode3.Mode(ledcolor, rePins);
  Mode3.Offled();
  Mode2.SEled(0, ledcolor, 0);

  Mode3.SEled(ledcolor, ledcolor * 2, brightness);
  Mode2.Mode(0, ledcolor);
  Mode2.Offled();
  Mode4.Mode(ledcolor * 2, rePins);
  Mode4.Offled();
  Mode3.SEled(ledcolor, ledcolor * 2, 0);

  Mode4.SEled(ledcolor * 2, numPins, brightness);
  Mode1.Mode(0, ledcolor * 2);
  Mode4.SEled(ledcolor * 2, numPins, 0);
}

void SEG(){
  
  for (int i = int(minutes) - 1 ; i >= 0  ; i--) {
    for (int j = 59; j >= 0 ; j--) {
      for (int k = 0; k < 23; k++) {
        time(i / 10, 0);
        time(i % 10, 1);
        time(j / 10, 2);
        time(j % 10, 3);
      }
    }
  }
  //
  float r = minutes - int(minutes);
  int second = r * 60 ;
  for (int j = second; j >= 0 ; j--) {
      for (int k = 0; k < 23; k++) {
        time(0, 0);
        time(0, 1);
        time(j / 10, 2);
        time(j % 10, 3);
      }
  }
  //check = true ;
  //
}

void SEG_2(){
  int sec = *ptr_seconds ;
  sec -- ;
  for ( int j = 0 ; j < 25 ; j ++){
    time(0,0);
    time(0,1);
    if ( sec  < 0 ) sec = 0 ;
    time(sec / 10 , 2);
    time(sec % 10 , 3) ;
    }
  *ptr_seconds = sec ;
  //Serial.println(*ptr_seconds);
}
void loop() {
}

// 13h10 8/6/2024 ntuanh
///
//int *ptr_minute = &minute ;
void TaskBlinkSEG( void *pvParameters){
  (void) pvParameters ;
  for(;;){
  SEG_2();
    //vTaskDelay(pdMS_TO_TICKS(1000));
  }
}

void TaskBlinkLED( void *pvParameters){
  (void) pvParameters ;
  for(;;){
    if ( *ptr_seconds == 1){
      LED();
      Serial.println("led");
      vTaskDelay(pdMS_TO_TICKS(3000));
    }
    Serial.println(*ptr_seconds);
    }

}
void TaskBlinkLCD( void *pvParameters){
  (void) pvParameters ;
  for(;;)RES();
}
///



  





