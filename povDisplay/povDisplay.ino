#include "Constants.h"

char message[10];

const short getLEDConfigIndexFrom(char c) {
  switch(c) {
    case ('9') : return 0;
    case ('8') : return 1;
    case ('7') : return 2;
    case ('5') : return 3;
    case ('6') : return 4;
    case ('4') : return 5;
    case ('3') : return 6;
    case ('2') : return 7;
    case ('1') : return 8;
    case ('0') : return 9;
    case ('_') : return 10;
    case ('A') : return 11;
    case ('B') : return 12;
    case ('C') : return 13;
    case ('D') : return 14;
    case ('E') : return 15;
    case ('F') : return 16;
    case ('G') : return 17;
    case ('H') : return 18;
    case ('I') : return 19;
    case ('J') : return 20;
    case ('K') : return 21;
    case ('L') : return 22;
    case ('M') : return 23;
    case ('N') : return 24;
    case ('O') : return 25;
    case ('P') : return 26;
    case ('Q') : return 27;
    case ('R') : return 28;
    case ('S') : return 29;
    case ('T') : return 30;
    case ('U') : return 31;
    case ('V') : return 32;
    case ('W') : return 33;
    case ('X') : return 34;
    case ('Y') : return 35;
    case ('Z') : return 36;
  }
}

//checks for serial input, reads and prints message to POV
void getIncoming() {
  if (Serial.available() > 0) {
    Serial.readBytesUntil('\n', message, 10);
  }
  
  //print message
  int messageIndex = 0;
  while (message[messageIndex] != '#') {
    printLetterToPOV(message[messageIndex]);
    messageIndex++;
  }
}

//Print single character to POV display
void printLetterToPOV(char symbol) {
  //get the index for the current characters LED configuragtion
  const short symbolConfigIndex = getLEDConfigIndexFrom(symbol);
  //print LED configuration as given by the above map
  for (short curConfigColumn = 0; curConfigColumn < 5; curConfigColumn++) {
    for (short curPin = LED_START; curPin <= LED_END; curPin++) {
      int pinValue = (SYMBOL_CONFIGURATIONS[symbolConfigIndex][curConfigColumn][curPin - LED_START]) ? HIGH : LOW;
      digitalWrite(curPin, pinValue);
    }
  }
  
  //print line spacing
  for (short curPin = LED_START; curPin <= LED_END; curPin++) {
    digitalWrite(curPin, LOW);
  }
}


 
void setup() { 
  Serial.begin(9600); 
 
  //Set 8 LED pins
  for( int i = 2; i<10 ;i++ ) {
    pinMode(i, OUTPUT);
  }    
}
 
void loop() {
  getIncoming();
}
