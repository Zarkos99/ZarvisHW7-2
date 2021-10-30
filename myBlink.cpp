#include "derek_LED.h"

int main(int argc, char* argv[]){
   if(argc!=2 and argc!=4){
        cout << "Usage is makeLEDs <command>" << endl;
        cout << "   command is one of: on, off, flash, blink <LED number> <number of times to blink>, or status" << endl;
        cout << " e.g. makeLEDs blink 0 5" << endl;
   }
   cout << "Starting the makeLEDs program" << endl;
   string cmd(argv[1]);
   int LEDnum, n;
   if(argc==4){
   	LEDnum=*argv[2]-'0';
   	n=*argv[3]-'0';
   }
   LED leds[4] = { LED(0), LED(1), LED(2), LED(3) };
   for(int i=0; i<=3; i++){
      if(cmd=="on")leds[i].turnOn();
      else if(cmd=="off")leds[i].turnOff();
      else if(cmd=="flash")leds[i].flash("100"); //default is "50"
      else if(cmd=="status")leds[i].outputState();
      else if(cmd=="blink"){leds[LEDnum].blink(n);break;}
      else{ cout << "Invalid command!" << endl; }
   }
   cout << "Finished the makeLEDs program" << endl;
   return 0;
}
