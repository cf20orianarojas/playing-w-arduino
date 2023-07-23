void setup() {
  // El ping 13 será la salida
  pinMode(13, OUTPUT);
}

void loop() {
  // que ping encendera
  digitalWrite(13, HIGH);
  delay(400); // se encendera 1s
  digitalWrite(13, LOW);
  delay(1000); // se apagara por 4ms
}
