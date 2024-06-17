#include <SPI.h>
#include <Wire.h>
#include <Adafruit_GFX.h>
#include <Adafruit_SSD1306.h>

#define SCREEN_WIDTH 128 
#define SCREEN_HEIGHT 64
#define OLED_RESET  -1 
Adafruit_SSD1306 display(SCREEN_WIDTH, SCREEN_HEIGHT, &Wire, OLED_RESET);

const int trigPin = D6;
const int echoPin = D5;
const int buzzer = D8;
const int ledPin = D7;

//long duration;
int distance;
int safetyDistance;

void setup() {
pinMode(trigPin, OUTPUT); 
pinMode(echoPin, INPUT); 
pinMode(buzzer, OUTPUT);
pinMode(ledPin, OUTPUT);
display.begin(SSD1306_SWITCHCAPVCC, 0x3C);
display.clearDisplay();
Serial.begin(9600); 
}

void loop() {
float duration;
float distance_cm;
float distance_in;

digitalWrite(trigPin, LOW);
delayMicroseconds(2);
digitalWrite(trigPin, HIGH);
delayMicroseconds(10);
digitalWrite(trigPin, LOW);

duration = pulseIn(echoPin, HIGH);

distance = duration*0.034/2;

safetyDistance = distance;
if (safetyDistance <= 15){
  digitalWrite(buzzer, HIGH);
  digitalWrite(ledPin, HIGH);
}
else{
  digitalWrite(buzzer, LOW);
  digitalWrite(ledPin, LOW);
}

Serial.print("Distance: ");
Serial.println(distance);
{
digitalWrite(trigPin, LOW); //PULSE ___|---|___
delayMicroseconds(2);
digitalWrite(trigPin, HIGH);
delayMicroseconds(10);
digitalWrite(trigPin, LOW);


distance_cm = (duration/2) / 29.1;
distance_in = (duration/2) / 73.914;

display.setCursor(25,0); //oled display
display.setTextSize(1);
display.setTextColor(WHITE);
display.println("Distance Meter");

display.setCursor(10,20); //oled display
display.setTextSize(2);
display.setTextColor(WHITE);
display.println(distance_cm);
display.setCursor(90,20);
display.setTextSize(2);
display.println("cm");

display.setCursor(10,45); //oled display
display.setTextSize(2);
display.setTextColor(WHITE);
display.println(distance_in);
display.setCursor(90,45);
display.setTextSize(2);
display.println("in");
display.display();
delay(10
0);
display.clearDisplay();
Serial.println(distance_cm);
Serial.println(distance_in);
}
}
