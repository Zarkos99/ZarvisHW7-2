// C++ header file to the derek_LED.cpp and myApp.cpp files. This file declares the functions
// and path relevant to the usr LEDS 0-3.

#ifndef LED_H
#define LED_H

#include<iostream>
#include<fstream>
#include<string>
#include<sstream>
#include<unistd.h>
using namespace std;

#define LED_PATH "/sys/class/leds/beaglebone:green:usr"

class LED{
       	private:
        string path;
        int number;
        virtual void writeLED(string filename, string value);
        virtual void removeTrigger();
        public:
        LED(int number);
        virtual void turnOn();
        virtual void turnOff();
        virtual void flash(string delayms);
        virtual void outputState();
        virtual ~LED();
	virtual void blink(int num);
};
#endif
