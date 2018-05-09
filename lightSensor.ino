int lightsensorPin = A0; int ledPin = 9;

void setup() { 
  Serial.begin(9600); 
  pinMode(lightsensorPin, INPUT); 
  pinMode(ledPin, OUTPUT);
}

void loop() { 
int lightsensorStatus = analogRead(lightsensorPin); 
if (lightsensorStatus >=1065) {
    digitalWrite(ledPin, HIGH);
    Serial.println("Room is Dark, LED is ON");
  } else { 
    digitalWrite(ledPin, LOW);
    Serial.println("Room is lit, LED is OFF"); 
  } 
}
