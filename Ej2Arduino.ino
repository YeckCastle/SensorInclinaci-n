int tiltSensorPin = 2;  // Sensor de inclinación
int buzzerPin = 7;      // Buzzer
int ledPin = 4;         // LED

void setup() {
  pinMode(tiltSensorPin, INPUT_PULLUP); // Habilitar resistencia pull-up interna
  pinMode(buzzerPin, OUTPUT);
  pinMode(ledPin, OUTPUT);
}

void loop() {
  int tiltState = digitalRead(tiltSensorPin); // Leer el sensor

  // Si el sensor detecta inclinación (se conecta a GND), encender el buzzer y el LED
  if (tiltState == LOW) {
    digitalWrite(buzzerPin, HIGH); // Encender buzzer
    digitalWrite(ledPin, HIGH);    // Encender LED
  } else {
    digitalWrite(buzzerPin, LOW);  // Apagar buzzer
    digitalWrite(ledPin, LOW);     // Apagar LED
  }
}
