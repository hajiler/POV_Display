#include <StandardCplusplus.h>
#include <map>
#include <vector>
std::map<char, std::vector<int> > charToLED = {
  std::make_pair('9' , std::vector<int> ({1,1,1,1,0,0,0,1, 1,0,0,1,0,0,0,1, 1,0,0,1,0,0,0,1, 1,0,0,1,0,0,0,1, 1,1,1,1,1,1,1,1})) ,
  std::make_pair('8' , std::vector<int> ({0,1,1,0,1,1,1,0, 1,0,0,1,0,0,0,1, 1,0,0,1,0,0,0,1, 1,0,0,1,0,0,0,1, 0,1,1,0,1,1,1,0})) ,
  std::make_pair('7' , std::vector<int> ({1,0,0,0,0,0,0,0, 1,0,0,0,1,0,0,0, 1,0,0,0,1,0,0,0, 1,0,0,1,1,1,1,1, 1,1,1,0,1,0,0,0})) ,
  std::make_pair('5' , std::vector<int> ({1,1,1,1,1,0,0,1, 1,0,0,0,1,0,0,1, 1,0,0,0,1,0,0,1, 1,0,0,0,1,0,0,1, 1,0,0,0,1,1,1,1})) ,
  std::make_pair('6' , std::vector<int> ({1,1,1,1,1,1,1,1, 1,0,0,0,1,0,0,1, 1,0,0,0,1,0,0,1, 1,0,0,0,1,0,0,1, 1,0,0,0,1,1,1,1})) ,
  std::make_pair('4' , std::vector<int> ({1,0,0,0,1,0,0,0, 1,1,1,1,1,1,1,1, 1,0,0,0,1,0,0,0, 0,1,0,1,0,0,0,0, 0,0,1,0,0,0,0,0})) ,
  std::make_pair('3' , std::vector<int> ({1,1,0,1,0,0,1,1, 1,0,0,1,0,0,0,1, 1,1,1,1,1,1,1,1, 0,0,0,0,0,0,0,0, 0,0,0,0,0,0,0,0})) ,
  std::make_pair('2' , std::vector<int> ({1,0,0,0,0,0,1,1, 1,0,0,0,0,1,0,1, 1,0,0,0,1,0,0,1, 1,0,0,1,0,0,0,1, 0,1,1,0,0,0,0,1})) ,
  std::make_pair('1' , std::vector<int> ({0,0,1,0,0,0,0,0, 0,1,0,0,0,0,0,0, 1,1,1,1,1,1,1,1, 0,0,0,0,0,0,0,0, 0,0,0,0,0,0,0,0})) ,
  std::make_pair('0' , std::vector<int> ({1,1,1,1,1,1,1,1, 1,0,0,0,0,0,0,1, 1,0,0,0,0,0,0,1, 1,0,0,0,0,0,0,1, 1,1,1,1,1,1,1,1})) ,
  std::make_pair('_' , std::vector<int> ({0,0,0,0,0,0,0,0, 0,0,0,0,0,0,0,0, 0,0,0,0,0,0,0,0, 0,0,0,0,0,0,0,0, 0,0,0,0,0,0,0,0})) ,
  std::make_pair('A' , std::vector<int> ({1,1,1,1,1,1,1,1, 1,0,0,1,0,0,0,0, 1,0,0,1,0,0,0,0, 1,0,0,1,0,0,0,0, 1,1,1,1,1,1,1,1})) ,
  std::make_pair('B' , std::vector<int> ({1,1,1,1,1,1,1,1, 1,0,0,1,0,0,0,1, 1,0,0,1,0,0,0,1, 1,0,0,1,0,0,0,1, 0,1,1,0,1,1,1,0})) ,
  std::make_pair('C' , std::vector<int> ({0,0,1,1,1,1,0,0, 0,1,0,0,0,0,1,0, 1,0,0,0,0,0,0,1, 1,0,0,0,0,0,0,1, 1,0,0,0,0,0,0,1})) ,
  std::make_pair('D' , std::vector<int> ({1,1,1,1,1,1,1,1, 1,0,0,0,0,0,0,1, 1,0,0,0,0,0,0,1, 0,1,0,0,0,0,1,0, 0,0,1,1,1,1,0,0})) ,
  std::make_pair('E' , std::vector<int> ({1,1,1,1,1,1,1,1, 1,0,0,1,0,0,0,1, 1,0,0,1,0,0,0,1, 1,0,0,1,0,0,0,1, 1,0,0,1,0,0,0,1})) ,
  std::make_pair('F' , std::vector<int> ({1,1,1,1,1,1,1,1, 1,0,0,1,0,0,0,0, 1,0,0,1,0,0,0,0, 1,0,0,1,0,0,0,0, 1,0,0,1,0,0,0,0})) ,
  std::make_pair('G' , std::vector<int> ({0,1,1,1,1,1,1,1, 1,0,0,0,0,0,0,1, 1,0,0,0,1,0,0,1, 1,0,0,0,1,0,0,1, 1,0,0,0,1,1,1,0})) ,
  std::make_pair('H' , std::vector<int> ({1,1,1,1,1,1,1,1, 0,0,0,0,1,0,0,0, 0,0,0,0,1,0,0,0, 0,0,0,0,1,0,0,0, 1,1,1,1,1,1,1,1})) ,
  std::make_pair('I' , std::vector<int> ({1,0,0,0,0,0,0,1, 1,0,0,0,0,0,0,1, 1,1,1,1,1,1,1,1, 1,0,0,0,0,0,0,1, 1,0,0,0,0,0,0,1})) ,
  std::make_pair('J' , std::vector<int> ({0,0,0,0,0,1,1,0, 0,0,0,0,1,0,0,1, 0,0,0,0,0,0,0,1, 0,0,0,0,0,0,0,1, 1,1,1,1,1,1,1,0})) ,
  std::make_pair('K' , std::vector<int> ({1,1,1,1,1,1,1,1, 0,0,0,1,1,0,0,0, 0,0,1,0,0,1,0,0, 0,1,0,0,0,0,1,0, 1,0,0,0,0,0,0,1})) ,
  std::make_pair('L' , std::vector<int> ({1,1,1,1,1,1,1,1, 0,0,0,0,0,0,0,1, 0,0,0,0,0,0,0,1, 0,0,0,0,0,0,0,1, 0,0,0,0,0,0,0,1})) ,
  std::make_pair('M' , std::vector<int> ({1,1,1,1,1,1,1,1, 0,1,0,0,0,0,0,0, 0,0,1,0,0,0,0,0, 0,1,0,0,0,0,0,0, 1,1,1,1,1,1,1,1})) ,
  std::make_pair('N' , std::vector<int> ({1,1,1,1,1,1,1,1, 0,0,1,0,0,0,0,0, 0,0,0,1,1,0,0,0, 0,0,0,0,0,1,0,0, 1,1,1,1,1,1,1,1})) ,
  std::make_pair('O' , std::vector<int> ({0,1,1,1,1,1,1,0, 1,0,0,0,0,0,0,1, 1,0,0,0,0,0,0,1, 1,0,0,0,0,0,0,1, 0,1,1,1,1,1,1,0})) ,
  std::make_pair('P' , std::vector<int> ({1,1,1,1,1,1,1,1, 1,0,0,1,0,0,0,0, 1,0,0,1,0,0,0,0, 1,0,0,1,0,0,0,0, 0,1,1,0,0,0,0,0})) ,
  std::make_pair('Q' , std::vector<int> ({0,1,1,1,1,1,1,0, 1,0,0,0,0,0,0,1, 1,0,0,0,0,1,0,1, 0,1,1,1,1,1,1,0, 0,0,0,0,0,0,0,1})) ,
  std::make_pair('R' , std::vector<int> ({1,1,1,1,1,1,1,1, 1,0,0,1,1,0,0,0, 1,0,0,1,0,1,0,0, 1,0,0,1,0,0,1,0, 0,1,1,0,0,0,0,1})) ,
  std::make_pair('S' , std::vector<int> ({0,1,1,1,0,0,0,1, 1,0,0,0,1,0,0,1, 1,0,0,0,1,0,0,1, 1,0,0,0,1,0,0,1, 1,0,0,0,1,1,1,0})) ,
  std::make_pair('T' , std::vector<int> ({1,0,0,0,0,0,0,0, 1,0,0,0,0,0,0,0, 1,1,1,1,1,1,1,1, 1,0,0,0,0,0,0,0, 1,0,0,0,0,0,0,0})) ,
  std::make_pair('U' , std::vector<int> ({1,1,1,1,1,1,1,0, 0,0,0,0,0,0,0,1, 0,0,0,0,0,0,0,1, 0,0,0,0,0,0,0,1, 1,1,1,1,1,1,1,0})) ,
  std::make_pair('V' , std::vector<int> ({1,1,1,1,1,1,0,0, 0,0,0,0,0,0,1,0, 0,0,0,0,0,0,0,1, 0,0,0,0,0,0,1,0, 1,1,1,1,1,1,0,0})) ,
  std::make_pair('W' , std::vector<int> ({1,1,1,1,1,1,1,1, 0,0,0,0,0,0,1,0, 0,0,0,0,0,1,0,0, 0,0,0,0,0,0,1,0, 1,1,1,1,1,1,1,1})) ,
  std::make_pair('X' , std::vector<int> ({1,1,0,0,0,0,1,1, 0,0,1,0,0,1,0,0, 0,0,0,1,1,0,0,0, 0,0,1,0,0,1,0,0, 1,1,0,0,0,0,1,1})) ,
  std::make_pair('Y' , std::vector<int> ({1,1,0,0,0,0,0,0, 0,0,1,0,0,0,0,0, 0,0,0,1,1,1,1,1, 0,0,1,0,0,0,0,0, 1,1,0,0,0,0,0,0})) ,
  std::make_pair('Z' , std::vector<int> ({1,0,0,0,0,1,1,1, 1,0,0,0,1,0,0,1, 1,0,0,1,0,0,0,1, 1,0,1,0,0,0,0,1, 1,1,0,0,0,0,0,1})) 
};

 // defining the space between the letters (ms)
 const int charSpacing = 4;
 // defining the time dots appear (ms) 
 const int delayTime =1; 
 const int pinOffSet = 3;
 
void setup() { 
  Serial.begin(9600); 
         
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
