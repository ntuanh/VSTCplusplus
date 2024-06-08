const int N = 4;
const int timer = 10;

long prev = 0;

class Port {
  private:
    byte length;
    byte level;
    byte* pins;
  public:
    Port(byte length, byte level):
      length(length), level(level) {};

    void Connect(byte* pins, byte mode) {
      this->pins = pins;
      for (int i = 0; i < length; i++) {
        pinMode(pins[i], mode);
      }
    }

    void Write(int value) {
      if (level == 0) value = ~value;
      for (int i = 0; i < length; i++) {
        digitalWrite(pins[i], value & (1 << i));
      }
    }

    void On(int pins) { digitalWrite(pins, 255); } 
    void Off(int pins) { digitalWrite(pins, 0); }

    void Set(int index) { digitalWrite(pins[index], level ? 1 : 0); };
    void Reset(int index) { digitalWrite(pins[index], level ? 0 : 1); }
};

class Process {
  protected:
    int value;
    virtual void Init() = 0;
    virtual void Next() = 0;
  public:
    void Run(Port& port)
    {
      int count = N;
      Init();
      port.Write(value);
      delay(timer);
      while(--count != 0)
      {
        Next();
        port.Write(value);
        delay(timer);
      }
      }
};
class Fill1: public Process {
  protected:
    void Init() override { value = 1; }
    void Next() override { value <<= 1; value |= 1; }
};