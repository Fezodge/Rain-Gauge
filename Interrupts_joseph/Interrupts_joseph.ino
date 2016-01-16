#define LED 13
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(13, OUTPUT);
  attachInterrupt(0, displayMicros, RISING);
  attachInterrupt(1, displayMillis, RISING);
  attachInterrupt(2, debounceInterrupt, RISING);
}

void debounceInterrupt() {
  if((long)(micros() - last_micros) >= debouncing_time * 1000 {
    Interrupt();
    last_micros = micros();
  }
}

void displayMicros() {
  Serial.write("micros() = ");
  Serial.println(micros());
}

void displayMillis() {
  Serial.write("millis() = ");
  Serial.println(millis());
}

void loop() {
  digitalWrite(LED, HIGH);
  delay(500);
  digitalWrite(LED, LOW);
  delay(500);
  }
