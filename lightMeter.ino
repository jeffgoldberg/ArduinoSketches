// demo of Grove - Light Sensor
#include <Grove_LED_Bar.h>

Grove_LED_Bar bar(9, 8, 0);

const int pinLight = A0;

void setup()
{
      bar.begin();
     Serial.begin(9600);
    
     
}

void loop()
{
    int value = analogRead(pinLight);
    int show = (value/75);
    if (show < 3) { show = 2 ;}
    if (value < 80) { show = 1 ;}
    
   
    
    Serial.println(show);
    
    
    bar.setLevel(show);
 
  
    
}



