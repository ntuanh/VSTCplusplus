#include "Port.h"

byte pins[] = { 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, // 10 led blue thẳng
                23, 24, 25, 27, 29, 31, 33, 35, //8 led blue chéo
                16, 3, 17, 18, 19, 20, 21, 37, 39, 41, // 10 led green thẳng
                43, 45, 47, 49, 51, 53, 26, 28,   // 8 led green chéo
                14, 30, 32, 34, 36, 38, 40, 42, 44, 46, // 10 led red thẳng
                48, 50, 52, 22, 15, 0, 1, 2  // 8 led red chéo
};

const int numPins = sizeof(pins) / sizeof(byte);
const int rePins = numPins - N;

class Effect {
  private:
    Port port;
  public:
    Effect(Port(port)): port(port) {};

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
      delay(timer);
      }
    }

    void Offled() {
      for (int j = 1; j < 5; j++) {
        port.Off(pins[rePins + j - 1]);
        delay(timer);
      }
    }

  
};