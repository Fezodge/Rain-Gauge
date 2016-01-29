#define LED 13
int tipCount = 0;
void setup() {
  Serial.begin(9600);
  pinMode(13, OUTPUT);
  attachInterrupt(0, displayMicros, RISING);
  //attachInterrupt(1, debounceInterrupt, RISING);
}

/*void debounceInterrupt() {
  if((long)(micros() - last_micros) >= debouncing_time * 1000 {
    Interrupt();
    last_micros = micros();
  }
}*/

void displayMicros() {
  Serial.write("micros() = ");
  Serial.println(micros());
  tipCount++;
}

void loop() {
  Serial.println(tipCount);
  tipCount = 0;
  }
