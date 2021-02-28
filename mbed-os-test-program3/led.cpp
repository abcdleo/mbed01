#include "mbed.h"

void Led(DigitalOut &ledpin, int count)
{
   for (int i = 0; i < 2 * count; ++i)
   {                     //blink for 10 times
      ledpin = !ledpin; // toggle led
      ThisThread::sleep_for(100ms);
   }
}