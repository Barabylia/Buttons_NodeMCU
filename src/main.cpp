#include <Arduino.h>

String sketch_name = "Buttons";



#define BUTTON_PIN D4       // 
#define LED_PIN D5       // 
int relay1=0;
int relay2=0;
int relay3=0;
int counter=0;

void setup() {
Serial.begin(115200);
Serial.println("Sketch name is \"" + sketch_name + "\"");

  pinMode(LED_PIN, OUTPUT);
  pinMode(BUTTON_PIN, INPUT_PULLUP);
  digitalWrite(BUTTON_PIN, HIGH);
}

void loop() {

if(!digitalRead(BUTTON_PIN) == HIGH && relay1 == 0)
{
  digitalWrite(LED_PIN, !digitalRead(LED_PIN));
  relay1 = 1;
  delay(50);
}

if(!digitalRead(BUTTON_PIN) == LOW && relay1 == 1)
{
  relay1 = 0;
  counter = counter+1;
  //Serial.println("relay1 = " + String(relay1));
Serial.println("counter = " + String(counter));
}



}
