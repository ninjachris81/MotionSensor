#define PIN_LED 1
#define PIN_PIR 2
#define PIN_RELAY 0
#define PIN_BRIGHTNESS 5

void setup()
{
  pinMode(PIN_RELAY, OUTPUT);
  //pinMode(PIN_LED, OUTPUT);
  pinMode(PIN_PIR, INPUT);
  pinMode(PIN_BRIGHTNESS, INPUT);

  //Serial.begin(9600);
}

void loop()
{
  int pir = digitalRead(PIN_PIR);
  int brightness = analogRead(PIN_BRIGHTNESS);

  //Serial.println(val);
  
  //digitalWrite(PIN_LED, pir);
  digitalWrite(PIN_RELAY, (pir==HIGH && brightness<50 ? LOW : HIGH));
  delay(10);
}
