void setup() {
  // put your setup code here, to run once:
  Serial.begin(1200);
}

void loop() {
  // Rudimentary Serial Plotter
  Serial.println("Hello\n");
  delay(500);
  Serial.println("Goodbye\n");

  // ####### Data Types #######
  
  // Character type
  // Example: a letter like 'a' or '2' in SINGLE quotes
  // When defining a character type, you have to specify it like this:
  // char charVariable = 'a';

  // Try making your own char!!!
  
  char testChar = 'a';
  Serial.println(testChar);

  // String type
  // Example: any sentence you could make, like "The banana is on top of the flower pot." in DOUBLE quotes
  // When defining a string type, you have to specify it like this:
  // String variableName = "This is a string!"

  // Try making your own string!!!
  
  String testString = "This is a string!";
  Serial.println(testString);

  // Integer type
  // Example: any whole number, whether negative or positive! You can put "3000" or "42"
  // NOTE: The integer can only be between -32,768 to 32,767
  // When defining an integer type, you have to specify it like this:
  // int integerName = 5000;

  int testInteger = 450;
  Serial.println(testInteger);

  // Boolean type
  // Example: The answer to "There is pizza in the room." This can either be "true" or "false"

  bool testBoolean = 0;
  if (testBoolean == true) {
    Serial.print("this is true?");  
  } else {
    Serial.print("this is false. Wah.");
  }
  
  // Fraction Equivalence
}
