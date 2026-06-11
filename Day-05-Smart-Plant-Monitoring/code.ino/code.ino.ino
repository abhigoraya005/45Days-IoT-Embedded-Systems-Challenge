int soilSensor = A0;

int led = 7;

int buzzer = 8;

int moistureValue = 0;

void setup() {

  pinMode(led, OUTPUT);

  pinMode(buzzer, OUTPUT);

  Serial.begin(9600);
}

void loop() {

  moistureValue = analogRead(soilSensor);

  Serial.print("Moisture Value: ");
  Serial.println(moistureValue);

  // Dry soil condition
  if(moistureValue > 700) {

    Serial.println("Soil is Dry - Water Needed");

    digitalWrite(led, HIGH);

    digitalWrite(buzzer, HIGH);

    delay(500);

    digitalWrite(buzzer, LOW);
  }

  else {

    Serial.println("Soil Moisture Normal");

    digitalWrite(led, LOW);
  }

  delay(1000);
}