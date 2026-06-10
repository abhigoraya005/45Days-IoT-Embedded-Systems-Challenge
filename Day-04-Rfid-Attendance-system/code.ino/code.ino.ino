#include <SPI.h>
#include <MFRC522.h>

#define SS_PIN 10
#define RST_PIN 9

MFRC522 rfid(SS_PIN, RST_PIN);

int buzzer = 8;

String authorizedUID = "93 A7 2F 1B";

void setup() {

  Serial.begin(9600);

  SPI.begin();

  rfid.PCD_Init();

  pinMode(buzzer, OUTPUT);

  Serial.println("RFID Attendance System");
}

void loop() {

  if ( ! rfid.PICC_IsNewCardPresent())
    return;

  if ( ! rfid.PICC_ReadCardSerial())
    return;

  String cardUID = "";

  for (byte i = 0; i < rfid.uid.size; i++) {

    cardUID += String(rfid.uid.uidByte[i], HEX);

    if(i < rfid.uid.size - 1)
      cardUID += " ";
  }

  cardUID.toUpperCase();

  Serial.print("Card UID: ");
  Serial.println(cardUID);

  if(cardUID == authorizedUID) {

    Serial.println("Attendance Marked");

    digitalWrite(buzzer, HIGH);
    delay(200);
    digitalWrite(buzzer, LOW);
  }

  else {

    Serial.println("Unauthorized Card");
  }

  delay(1000);
}