// programa que envia sinal auto para saída 7, aguarda 1 segundo, e envia sinal baixo para saída 7
void setup() {
  // put your setup code here, to run once:
  pinMode (7,OUTPUT);
  // porta configurada como saída

}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(7,HIGH);
  delay(1000);
  digitalWrite(7,LOW);
  delay(1000);

}
