#include <Servo.h>

Servo gate;

int entrySensor = 2;
int exitSensor = 3;

int buzzer = 8;

int parkingCount = 0;

void setup() {

  pinMode(entrySensor, INPUT);
  pinMode(exitSensor, INPUT);

  pinMode(buzzer, OUTPUT);

  gate.attach(9);

  gate.write(0);

  Serial.begin(9600);
}

void loop() {

  // ENTRY
  if(digitalRead(entrySensor) == LOW) {

    Serial.println("Vehicle Entered");

    parkingCount++;

    Serial.print("Cars Inside: ");
    Serial.println(parkingCount);

    beep();

    openGate();
  }

  // EXIT
  if(digitalRead(exitSensor) == LOW) {

    if(parkingCount > 0) {
      parkingCount--;
    }

    Serial.println("Vehicle Exited");

    Serial.print("Cars Inside: ");
    Serial.println(parkingCount);

    beep();

    openGate();
  }

}

void openGate() {

  gate.write(90);

  delay(3000);

  gate.write(0);

  delay(1000);
}

void beep() {

  digitalWrite(buzzer, HIGH);

  delay(200);

  digitalWrite(buzzer, LOW);
}