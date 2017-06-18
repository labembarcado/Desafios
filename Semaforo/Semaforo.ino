
void led_temp(int pin, int time);

void setup() {
  // put your setup code here, to run once:
  pinMode(8, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(10, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  led_temp(8, 30000);
  led_temp(9, 5000);
  led_temp(10,15000);
}

void led_temp(int pin, int time)
{
  digitalWrite(pin, HIGH);
  delay(time);
  digitalWrite(pin, LOW);
}

