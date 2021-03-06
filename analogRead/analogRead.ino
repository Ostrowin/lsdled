#include "AudioAnalyzer.h"
//Version 1.3 for Spectrum analyzer
//Please download the lastest library file

Analyzer Audio = Analyzer(4,5,5);//Strobe pin ->4  RST pin ->5 Analog Pin ->5
//Analyzer Audio = Analyzer();//Strobe->4 RST->5 Analog->0

int FreqVal[7];//
int r = 8;      // LED connected to digital pin 9
int g = 9;      // LED connected to digital pin 9
int b = 10;      // LED connected to digital pin 9
void setup()
{
  Serial.begin(115200);
  Audio.Init();//Init module 
}

void loop()
{
  Audio.ReadFreq(FreqVal);//Return 7 values of 7 bands pass filiter
                          //Frequency(Hz):63  160  400  1K  2.5K  6.25K  16K
                          //FreqVal[]:      0    1    2    3    4    5    6  
//  for(int i=0;i<7;i++)            
//  {
//    Serial.print(max((FreqVal[i]-100),0));
//    if(i<6)  Serial.print(",");
//    else Serial.println();
//  }
  //delay(200);
  analogWrite(r, FregVal[2]);
  analogWrite(g, FregVal[3]);
  analogWrite(b, FregVal[4]);
  
}
