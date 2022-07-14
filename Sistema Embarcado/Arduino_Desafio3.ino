#define pot1 A0

void setup() {
  pinMode(pot1, INPUT);
}

void loop() {
  valor_pot = analogRead(pot1);

}
