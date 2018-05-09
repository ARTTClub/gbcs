int lightsensorPin=A0; int ledpin=9; 

void setup() {

pinMode(lightsensorPin,INPUT); pinMode(ledpin, OUTPUT); Serial.begin(9600);

}

void loop() {

int lightsensorStatus=analogRead(lightsensorPin);

Serial.println(lightsensorStatus);

if(lightsensorStatus <=700) 
  { 
    digitalWrite(ledpin, HIGH); 
    Serial.println("Room is Dark, LED is ON");  
  } else { 
    digitalWrite(ledpin, LOW); 
    Serial.println("Room is Bright, LED is OFF"); 
  } 

}
