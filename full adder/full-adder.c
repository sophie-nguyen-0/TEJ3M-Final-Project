// Created on: June 2025
// Created by: Sophie N
// Created for: This is the code for a 1/2 adder

const int DIGIT_Cin = 13;
const int DIGIT_A1 = 12;
const int DIGIT_B1 = 11;

void setup()
{
  // setup serial output
  Serial.begin(9600);
  // set pin mode to output
  pinMode(DIGIT_Cin, OUTPUT);
  pinMode(DIGIT_A1, OUTPUT);
  pinMode(DIGIT_B1, OUTPUT);
  
  // set all pins to "0)
  digitalWrite(DIGIT_Cin, 0);
  digitalWrite(DIGIT_A1, 0); //LOW and HIGH just reference 0 & 1
  digitalWrite(DIGIT_B1, 0);
  
  // loop over the inputs
  Serial.print("Starting ... \n\n");
  delay(1000); // Wait for 1000 millisecond(s)
  
  for (int Cin= 0; Cin <= 1; ++Cin){
    digitalWrite(DIGIT_Cin, Cin);
    for (int onesA = 0; onesA <= 1; ++onesA) {
      digitalWrite(DIGIT_A1, onesA);
      for (int onesB = 0; onesB <= 1; ++onesB) {
        digitalWrite(DIGIT_B1, onesB);

        Serial.print("Cin = " + String(Cin) + "\n");
        Serial.print("A1 = " + String(onesA) + "\n");
        Serial.print("B1 = " + String(onesB) + "\n");
        Serial.print( String(Cin) + " + " + String(onesA) + " + " + String(onesB) + " = " + String(Cin + onesA + onesB) + "\n\n");
        delay(2000); // Wait for 2000 millisecond(s)
      }
    }
  }
}
  
void loop()
{
  // Done
  Serial.print("\nDone. \n");
  delay(10000); // Wait for 10000 millisecond(s)
}
