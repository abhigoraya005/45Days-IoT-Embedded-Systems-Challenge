int ir1 = 2;
int ir2 = 3;

int buzzer = 8;

int insideCount = 0;

void setup() {

  pinMode(ir1, INPUT);
  pinMode(ir2, INPUT);

  pinMode(buzzer, OUTPUT);

  Serial.begin(9600);
}

void loop() {

  // ENTRY
  if(digitalRead(ir1) == LOW) {

    delay(300);

    if(digitalRead(ir2) == LOW) {

      insideCount++;

      Serial.print("Person Entered | Inside: ");
      Serial.println(insideCount);

      beep();

      while(digitalRead(ir2) == LOW);
    }
  }

  // EXIT
  if(digitalRead(ir2) == LOW) {

    delay(300);

    if(digitalRead(ir1) == LOW) {

      if(insideCount > 0) {
        insideCount--;
      }

      Serial.print("Person Exited | Inside: ");
      Serial.println(insideCount);

      beep();

      while(digitalRead(ir1) == LOW);
    }
  }
}

void beep() {

  digitalWrite(buzzer, HIGH);
  delay(200);

  digitalWrite(buzzer, LOW);
}