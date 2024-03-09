int GREEN_DELAY = 4000;
int YELLOW_DELAY = 1000;
int RED_DELAY = 3000;
int GREEN_PIN = 9;
int YELLOW_PIN = 7;
int RED_PIN = 5;

void setup() {
  // put your setup code here, to run once:
pinMode(GREEN_PIN, OUTPUT);
pinMode(YELLOW_PIN, OUTPUT);
pinMode(RED_PIN, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
digitalWrite(GREEN_PIN, HIGH);
delay(GREEN_DELAY);
digitalWrite(GREEN_PIN, LOW);
digitalWrite(YELLOW_PIN, HIGH);
delay(YELLOW_DELAY);
digitalWrite(YELLOW_PIN, LOW);
digitalWrite(RED_PIN, HIGH);
delay(RED_DELAY);
digitalWrite(RED_PIN, LOW);
}
