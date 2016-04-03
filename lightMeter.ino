// demo of Grove - Light Sensor
#include <Grove_LED_Bar.h>

Grove_LED_Bar bar(9, 8, 0);

const int pinLight = A0;

void setup()
{
      bar.begin();//start LED display
      Serial.begin(9600);//start console
    
     
}

void loop()
{
    int value = analogRead(pinLight); //read light sensor
    int show = (value/75);            //reduce reading into dislay range
    if (show < 3) { show = 2 ;}       //never show fewer than 2 lower segments pending next test
    if (value < 80) { show = 1 ;}     //when reading less than 80 only show 1 segment (very low light)
    
   
    
    Serial.println(show);//display reading on console
    
    
    bar.setLevel(show);//set LED Display
 
  
    
}



