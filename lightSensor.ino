
 int lightsensorPin = A0; 
 int ledPin = 9;

// int lightsensorStatus;
 void setup() {
 Serial.begin(9600);
 pinMode(lightsensorPin, INPUT);
 pinMode(ledPin, OUTPUT);
 }

void loop() {
  int lightsensorStatus = analogRead(lightsensorPin);
   Serial.println(lightsensorStatus);

  if (lightsensorStatus <= 700) {
  digitalWrite(ledPin, HIGH);
  Serial.println("Room is dark, Led is ON");
  }  else {
  digitalWrite(ledPin, LOW);
  Serial.println("Room is lit, Led is OFF");
  }

  delay(1000);
}
