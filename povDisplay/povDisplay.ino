#include <ArduinoSTL.h>
#include <map>
#include <vector>

std::map<char, std::vector<int> > charToLED;
// charToLED.emplace('9' , {1,1,1,1,0,0,0,1, 1,0,0,1,0,0,0,1, 1,0,0,1,0,0,0,1, 1,0,0,1,0,0,0,1, 1,1,1,1,1,1,1,1});
// charToLED.emplace('8' , std::vector<int> ({0,1,1,0,1,1,1,0, 1,0,0,1,0,0,0,1, 1,0,0,1,0,0,0,1, 1,0,0,1,0,0,0,1, 0,1,1,0,1,1,1,0}));
// charToLED.emplace('7' , std::vector<int> ({1,0,0,0,0,0,0,0, 1,0,0,0,1,0,0,0, 1,0,0,0,1,0,0,0, 1,0,0,1,1,1,1,1, 1,1,1,0,1,0,0,0}));
// charToLED.emplace('5' , std::vector<int> ({1,1,1,1,1,0,0,1, 1,0,0,0,1,0,0,1, 1,0,0,0,1,0,0,1, 1,0,0,0,1,0,0,1, 1,0,0,0,1,1,1,1}));
// charToLED.emplace('6' , std::vector<int> ({1,1,1,1,1,1,1,1, 1,0,0,0,1,0,0,1, 1,0,0,0,1,0,0,1, 1,0,0,0,1,0,0,1, 1,0,0,0,1,1,1,1}));
// charToLED.emplace('4' , std::vector<int> ({1,0,0,0,1,0,0,0, 1,1,1,1,1,1,1,1, 1,0,0,0,1,0,0,0, 0,1,0,1,0,0,0,0, 0,0,1,0,0,0,0,0}));
// charToLED.emplace('3' , std::vector<int> ({1,1,0,1,0,0,1,1, 1,0,0,1,0,0,0,1, 1,1,1,1,1,1,1,1, 0,0,0,0,0,0,0,0, 0,0,0,0,0,0,0,0}));
// charToLED.emplace('2' , std::vector<int> ({1,0,0,0,0,0,1,1, 1,0,0,0,0,1,0,1, 1,0,0,0,1,0,0,1, 1,0,0,1,0,0,0,1, 0,1,1,0,0,0,0,1}));
// charToLED.emplace('1' , std::vector<int> ({0,0,1,0,0,0,0,0, 0,1,0,0,0,0,0,0, 1,1,1,1,1,1,1,1, 0,0,0,0,0,0,0,0, 0,0,0,0,0,0,0,0}));
// charToLED.emplace('0' , std::vector<int> ({1,1,1,1,1,1,1,1, 1,0,0,0,0,0,0,1, 1,0,0,0,0,0,0,1, 1,0,0,0,0,0,0,1, 1,1,1,1,1,1,1,1}));
// charToLED.emplace('_' , std::vector<int> ({0,0,0,0,0,0,0,0, 0,0,0,0,0,0,0,0, 0,0,0,0,0,0,0,0, 0,0,0,0,0,0,0,0, 0,0,0,0,0,0,0,0}));
// charToLED.emplace('A' , std::vector<int> ({1,1,1,1,1,1,1,1, 1,0,0,1,0,0,0,0, 1,0,0,1,0,0,0,0, 1,0,0,1,0,0,0,0, 1,1,1,1,1,1,1,1}));
// charToLED.emplace('B' , std::vector<int> ({1,1,1,1,1,1,1,1, 1,0,0,1,0,0,0,1, 1,0,0,1,0,0,0,1, 1,0,0,1,0,0,0,1, 0,1,1,0,1,1,1,0}));
// charToLED.emplace('C' , std::vector<int> ({0,0,1,1,1,1,0,0, 0,1,0,0,0,0,1,0, 1,0,0,0,0,0,0,1, 1,0,0,0,0,0,0,1, 1,0,0,0,0,0,0,1}));
// charToLED.emplace('D' , std::vector<int> ({1,1,1,1,1,1,1,1, 1,0,0,0,0,0,0,1, 1,0,0,0,0,0,0,1, 0,1,0,0,0,0,1,0, 0,0,1,1,1,1,0,0}));
// charToLED.emplace('E' , std::vector<int> ({1,1,1,1,1,1,1,1, 1,0,0,1,0,0,0,1, 1,0,0,1,0,0,0,1, 1,0,0,1,0,0,0,1, 1,0,0,1,0,0,0,1}));
// charToLED.emplace('F' , std::vector<int> ({1,1,1,1,1,1,1,1, 1,0,0,1,0,0,0,0, 1,0,0,1,0,0,0,0, 1,0,0,1,0,0,0,0, 1,0,0,1,0,0,0,0}));
// charToLED.emplace('G' , std::vector<int> ({0,1,1,1,1,1,1,1, 1,0,0,0,0,0,0,1, 1,0,0,0,1,0,0,1, 1,0,0,0,1,0,0,1, 1,0,0,0,1,1,1,0}));
// charToLED.emplace('H' , std::vector<int> ({1,1,1,1,1,1,1,1, 0,0,0,0,1,0,0,0, 0,0,0,0,1,0,0,0, 0,0,0,0,1,0,0,0, 1,1,1,1,1,1,1,1}));
// charToLED.emplace('I' , std::vector<int> ({1,0,0,0,0,0,0,1, 1,0,0,0,0,0,0,1, 1,1,1,1,1,1,1,1, 1,0,0,0,0,0,0,1, 1,0,0,0,0,0,0,1}));
// charToLED.emplace('J' , std::vector<int> ({0,0,0,0,0,1,1,0, 0,0,0,0,1,0,0,1, 0,0,0,0,0,0,0,1, 0,0,0,0,0,0,0,1, 1,1,1,1,1,1,1,0}));
// charToLED.emplace('K' , std::vector<int> ({1,1,1,1,1,1,1,1, 0,0,0,1,1,0,0,0, 0,0,1,0,0,1,0,0, 0,1,0,0,0,0,1,0, 1,0,0,0,0,0,0,1}));
// charToLED.emplace('L' , std::vector<int> ({1,1,1,1,1,1,1,1, 0,0,0,0,0,0,0,1, 0,0,0,0,0,0,0,1, 0,0,0,0,0,0,0,1, 0,0,0,0,0,0,0,1}));
// charToLED.emplace('M' , std::vector<int> ({1,1,1,1,1,1,1,1, 0,1,0,0,0,0,0,0, 0,0,1,0,0,0,0,0, 0,1,0,0,0,0,0,0, 1,1,1,1,1,1,1,1}));
// charToLED.emplace('N' , std::vector<int> ({1,1,1,1,1,1,1,1, 0,0,1,0,0,0,0,0, 0,0,0,1,1,0,0,0, 0,0,0,0,0,1,0,0, 1,1,1,1,1,1,1,1}));
// charToLED.emplace('O' , std::vector<int> ({0,1,1,1,1,1,1,0, 1,0,0,0,0,0,0,1, 1,0,0,0,0,0,0,1, 1,0,0,0,0,0,0,1, 0,1,1,1,1,1,1,0}));
// charToLED.emplace('P' , std::vector<int> ({1,1,1,1,1,1,1,1, 1,0,0,1,0,0,0,0, 1,0,0,1,0,0,0,0, 1,0,0,1,0,0,0,0, 0,1,1,0,0,0,0,0}));
// charToLED.emplace('Q' , std::vector<int> ({0,1,1,1,1,1,1,0, 1,0,0,0,0,0,0,1, 1,0,0,0,0,1,0,1, 0,1,1,1,1,1,1,0, 0,0,0,0,0,0,0,1}));
// charToLED.emplace('R' , std::vector<int> ({1,1,1,1,1,1,1,1, 1,0,0,1,1,0,0,0, 1,0,0,1,0,1,0,0, 1,0,0,1,0,0,1,0, 0,1,1,0,0,0,0,1}));
// charToLED.emplace('S' , std::vector<int> ({0,1,1,1,0,0,0,1, 1,0,0,0,1,0,0,1, 1,0,0,0,1,0,0,1, 1,0,0,0,1,0,0,1, 1,0,0,0,1,1,1,0}));
// charToLED.emplace('T' , std::vector<int> ({1,0,0,0,0,0,0,0, 1,0,0,0,0,0,0,0, 1,1,1,1,1,1,1,1, 1,0,0,0,0,0,0,0, 1,0,0,0,0,0,0,0}));
// charToLED.emplace('U' , std::vector<int> ({1,1,1,1,1,1,1,0, 0,0,0,0,0,0,0,1, 0,0,0,0,0,0,0,1, 0,0,0,0,0,0,0,1, 1,1,1,1,1,1,1,0}));
// charToLED.emplace('V' , std::vector<int> ({1,1,1,1,1,1,0,0, 0,0,0,0,0,0,1,0, 0,0,0,0,0,0,0,1, 0,0,0,0,0,0,1,0, 1,1,1,1,1,1,0,0}));
// charToLED.emplace('W' , std::vector<int> ({1,1,1,1,1,1,1,1, 0,0,0,0,0,0,1,0, 0,0,0,0,0,1,0,0, 0,0,0,0,0,0,1,0, 1,1,1,1,1,1,1,1}));
// charToLED.emplace('X' , std::vector<int> ({1,1,0,0,0,0,1,1, 0,0,1,0,0,1,0,0, 0,0,0,1,1,0,0,0, 0,0,1,0,0,1,0,0, 1,1,0,0,0,0,1,1}));
// charToLED.emplace('Y' , std::vector<int> ({1,1,0,0,0,0,0,0, 0,0,1,0,0,0,0,0, 0,0,0,1,1,1,1,1, 0,0,1,0,0,0,0,0, 1,1,0,0,0,0,0,0}));



 // defining the space between the letters (ms)
 const int charSpacing = 4;
 // defining the time dots appear (ms) 
 const int delayTime =1; 
 const int pinOffSet = 3;
 
void setup() { 
  std::map<int, char> x;
  x.emplace(5, 'a');
  Serial.begin(9600); 
//  charToLED.emplace('Z' , std::vector<int>({1,0,0,0,0,1,1,1, 1,0,0,0,1,0,0,1, 1,0,0,1,0,0,0,1, 1,0,1,0,0,0,0,1, 1,1,0,0,0,0,0,1}));
         
  //Set 8 LED pins
  for( int i = 2; i<10 ;i++ ) {
    pinMode(i, OUTPUT);
  }    
}

//checks for serial input, reads and prints message to POV
void getIncoming() {
  char inputBuffer[64];
  if (Serial.available() > 0) {
    Serial.readBytesUntil('\n', inputBuffer, 64);
  }
  
  //print message
  int messageIndex = 0;
  while (inputBuffer[messageIndex] != '#') {
    printLetterToPOV(inputBuffer[messageIndex]);
    messageIndex++;
  }
}

//finds led configuration for char, calls helper to print each part of design and a space for incoming character
void printLetterToPOV(char symbol) {
  std::vector<int> charDesign = charToLED.find(symbol)->second;
  //print LED configuration as given by the above map
  for (int charOffSet = 0; charOffSet < 24; charOffSet += 8) {
    printColumnToLED(charOffSet, charDesign);
  }
  //print line spacing
  for (int cur = 0; cur < 8; cur ++) {
    digitalWrite(cur + pinOffSet, 0);
  }
}

//helper to print led configuration to LEDs for one part of char
void printColumnToLED(int charOffSet, std::vector<int> charDesign) {
  for (int cur = 0; cur < 8; cur ++) {
    digitalWrite(cur + pinOffSet, charDesign.at(cur + charOffSet));
  }
  delay(delayTime);
}
 
void loop() {
  getIncoming();
}
