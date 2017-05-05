int LED=3;  //Declaramos el pin 3.

void setup() {
  // put your setup code here, to run once:
  pinMode(LED, OUTPUT); //Declaramos el pint 3 como salida.
  digitalWrite(LED, LOW); //Inicializamos el LED a apagado
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(LED, HIGH); //Cambiamos el LED a encendido.
  delay(500); //Declaramos un retardo en el LED para ver la intermitencia.
  digitalWrite(LED, LOW); //Cambiamos el LED a apagado.
  delay(500); //Declaramos un retardo en el LED para ver la intermitencia.
  
}
