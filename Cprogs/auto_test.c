#include <Servo.h>
Servo servo;
int servoPos = 0;

int irPin=2;
int irPin1=3;// sanitizing
int relay = 4;
int LED = 13;
#include <Wire.h>
#include <Adafruit_MLX90614.h>

Adafruit_MLX90614 mlx = Adafruit_MLX90614();


void setup() {
  Serial.begin(9600);
  servo.attach(9);
  servo.write(30);
  mlx.begin(); 
  pinMode(irPin, INPUT);
  pinMode(irPin1, INPUT);
pinMode (LED, OUTPUT); // Led pin OUTPUT
 pinMode(relay,OUTPUT);
 digitalWrite(relay,HIGH);
}

void loop() {
  int statusSensor = digitalRead (irPin);
  int statusSensor1 = digitalRead (irPin1);
  
  if (statusSensor == 0){
    digitalWrite(LED, HIGH); // LED LOW
  Serial.print("\tObject = "); 
  Serial.print(mlx.readObjectTempF()); 
  Serial.println("*F");
 if(mlx.readObjectTempF() >=95 && mlx.readObjectTempF() <=98){
  servoUp();
  delay(2000);
  servoDown();
 }
  }
  
if (statusSensor1 == 0){
  delay(3000);
  digitalWrite(relay,LOW);  
   delay(500); // wait for a second
  digitalWrite(relay , HIGH);    

  
}
  

}


void servoUp()
{
  servo.attach(9);
  for (servoPos = 30; servoPos <= 120; servoPos += 1)
  {
    servo.write(servoPos);
    delay(5);
  }
}

void servoDown()
{
  servo.attach(9);
  for (servoPos = 120; servoPos >= 30; servoPos -= 1)
  {
    servo.write(servoPos);
    delay(5);
  }
}
