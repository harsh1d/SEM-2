#define BLYNK_TEMPLATE_ID "TMPL38_QT8EGq"
#define BLYNK_TEMPLATE_NAME "Distance Measurement Ultrasonic Sensor"// Fill-in information from your Blynk Template here
#define BLYNK_TEMPLATE_ID "Write your Template ID"
#define BLYNK_DEVICE_NAME "Write your Device ID"

#define BLYNK_FIRMWARE_VERSION        "0.1.0"
#define BLYNK_PRINT Serial
#define USE_NODE_MCU_BOARD

#include "BlynkEdgent.h"

#define echoPin D7
#define trigPin D6

long duration;
int distance; 

void ultrasonic()
{
    digitalWrite(trigPin, LOW);
    delayMicroseconds(2);
    digitalWrite(trigPin, HIGH);
    delayMicroseconds(10);
    digitalWrite(trigPin, LOW);
    duration = pulseIn(echoPin, HIGH);
    distance = duration * 0.034 / 2; //formula to calculate the distance for ultrasonic sensor
    Serial.print("Distance: ");
    Serial.println(distance);
    Blynk.virtualWrite(V0, distance);
    delay(500);
}
void setup()
{
  Serial.begin(9600);
  pinMode(34, INPUT);
  pinMode(trigPin, OUTPUT); 
  pinMode(echoPin, INPUT); 
  BlynkEdgent.begin();
  delay(2000); 
}

void loop() 
{
  BlynkEdgent.run();
  ultrasonic();
}
