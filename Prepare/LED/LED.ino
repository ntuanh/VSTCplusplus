/*
https://wokwi.com/projects/396886509294769153
*/
const int pinled1 = 10;
const int pinled2 = 11;
const int pinled3 = 12;
const int pinled4 = 13;
const int time = 10 ;

byte segmentPins[] = {2, 3, 4, 5, 6, 7, 8, 9};

void DisplayNum(unsigned int num) {
  static byte code[] = {
    0xC0, 
    0xF9,
    0xA4,
    0xB0,
    0x99,
    0x92,
    0x82,
    0xF8,
    0x80,
    0x90
  };

  for (int pin = 2; pin < 10; pin++) {
    digitalWrite(pin, LOW);
  }
  

  for (int i = 0; i < 8; i++) {
    if (code[num] & (1 << i)) {
      digitalWrite(segmentPins[i], HIGH);
    }
  }

 
}
void setup() {
  // put your setup code here, to run once:
  for (int pin = 2; pin < 10; pin++) {
    pinMode(pin, OUTPUT);
  }
  pinMode(pinled1, OUTPUT);
  pinMode(pinled2, OUTPUT);
  pinMode(pinled3, OUTPUT);
  pinMode(pinled4, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  for (int num = 0; num < 10000; num++) {
    for (int i = 0; i < 10; i++) {
      digitalWrite(pinled1, 0);
      DisplayNum(num / 1000);
      //delay(10);
      digitalWrite(pinled1, 1);
      delay(10);
      digitalWrite(pinled1, 0);

      digitalWrite(pinled2, 0);
      DisplayNum((num / 100) % 10);
      //delay(10);
      digitalWrite(pinled2, 1);
      delay(10);
      digitalWrite(pinled2, 0);

      digitalWrite(pinled3, 0);
      DisplayNum((num / 10) % 10);
      //delay(10);
      digitalWrite(pinled3, 1);
      delay(10);
      digitalWrite(pinled3, 0);

      digitalWrite(pinled4, 0);
      DisplayNum(num % 10);
      //delay(10);
      digitalWrite(pinled4, 1);
      delay(10);
      digitalWrite(pinled4, 0);
    }
    //delay(1000);
  }

  /*for (int i = 0; i < 10; i++) {
    for (int j = 0; j < 10; j++) {
      for (int k = 0; k < 25; k++) {
        digitalWrite(pinled4, 0);
        DisplayNum(i);
        digitalWrite(pinled3, 1);
        delay(10);
        digitalWrite(pinled3, 0);
        DisplayNum(j);
        digitalWrite(pinled4, 1);
        delay(10);
      }
    }
  }*/
  

}
