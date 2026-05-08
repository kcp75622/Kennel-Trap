#include <Servo.h>
int servoPin = 9;       // servo with laser
int servoPin2 = 6;      // servo for door
int servoPin3 = 11;     // Servo to lock the door
int trigPin = 2;         // trigger pin
int echoPin = 4;         // Echo pin
int outputPin = 7;
long duration;
int distance;
int val;
int pos = 0;        // 0 degrees
int servoAngletwo = 180;
int servoAnglethree = 0; 
int servoAngle = 90;
//int servoAngleone =0;
int br = 115200;
int dt = 1000;
int timet = 5000;
int variable = 0;
Servo myServo;   // this was Servo myServo;
Servo myServo2; 
Servo myServo3;
bool objectDetected = false;

void setup() {
  // put your setup code here, to run once:
Serial.begin(br);
//myServo.attach(servoPin);
myServo.attach(servoPin);  // laser motor
myServo2.attach(servoPin2); // door servo
myServo3.attach(servoPin3);   // lock motor
myServo.write(servoAngle);
myServo2.write(servoAngletwo);
//myServo3.write(servoPin3);

delay(dt);
delay(timet);
pinMode(trigPin, OUTPUT);
pinMode(echoPin, INPUT);

}
void loop()
 {



 for (pos = 90; pos >= 0; pos -= 1)
  {
    myServo.write(pos);
    delay(400);

    digitalWrite(trigPin, LOW);
    delayMicroseconds(2);
    digitalWrite(trigPin, HIGH);
    delayMicroseconds(10);
    digitalWrite(trigPin, LOW);

    duration = pulseIn(echoPin, HIGH);
    distance = duration * 0.034 / 2;

    // If object detected → close servo2
    if (distance > 0 && distance < 38)
    {
      myServo.write(0);
      myServo2.write(40);  // CLOSED position
      delay(9000);
    }
    else
    {
      myServo2.write(0);   // OPEN position
    }
  }
 }


 




  
