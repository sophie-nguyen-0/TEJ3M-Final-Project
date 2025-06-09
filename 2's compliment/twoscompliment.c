// Created on: June 2025
// Created by: Sophie N
// Created for: This is the code for a 2-bit full adder

const int DIGIT_A1 = 13;
const int DIGIT_B1 = 12;
const int DIGIT_A2 = 11;
const int DIGIT_B2 = 10;
const int delayTime = 3500;

void setup()
{
  // setup serial output
  Serial.begin(9600);
  // set pin mode to output
  pinMode(DIGIT_A1, OUTPUT);
  pinMode(DIGIT_B1, OUTPUT);
  pinMode(DIGIT_A2, OUTPUT);
  pinMode(DIGIT_B2, OUTPUT);
  
  // set all pins to "0)
  //LOW and HIGH just reference 0 & 1
  digitalWrite(DIGIT_A1, 0); 
  digitalWrite(DIGIT_B1, 0);
  digitalWrite(DIGIT_A2, 0); 
  digitalWrite(DIGIT_B2, 0);
  
  // loop over the inputs
  Serial.print("Starting ... \n\n");
  delay(delayTime); 
  
  for (int twosA= 0; twosA >= -2; twosA-=2){
    digitalWrite(DIGIT_A2, twosA);
    for (int onesA = 0; onesA <= 1; ++onesA) {
      digitalWrite(DIGIT_A1, onesA);
      for (int twosB= 0; twosB >= -2; twosB-=2){
        digitalWrite(DIGIT_B2, twosB);
        for (int onesB = 0; onesB <= 1; ++onesB) {
          digitalWrite(DIGIT_B1, onesB);

          Serial.print("A1 = " + String(onesA) + "\n");
          Serial.print("B1 = " + String(onesB) + "\n");
          Serial.print("A2 = " + String(twosA) + "\n");
          Serial.print("B2 = " + String(twosB) + "\n");
          Serial.print( String(twosA + onesA) + " + " + String(twosB + onesB) + " = " + String((twosA + onesA) + (onesB + twosB)) + "\n\n");
          delay(delayTime); 
        }
      }
    }
  }
}
  
void loop()
{
  // Done
  Serial.print("\nDone. \n");
  delay(delayTime); 
}
