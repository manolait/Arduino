int PULSADOR = 2;
int LED = 3;
int estado = LOW;

void setup() {
  // put your setup code here, to run once:
  pinMode(PULSADOR, INPUT);
  pinMode(LED, OUTPUT);
  digitalWrite(LED, LOW);
}

void loop() {
  // put your main code here, to run repeatedly:
  while(digitalRead(PULSADOR)==LOW);
  estado = digitalRead(LED);
  digitalWrite(LED, !estado);
  while(digitalRead(PULSADOR)==HIGH);
  
}
