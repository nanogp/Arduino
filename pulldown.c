#define LED 10
#define BOTON 7

//Circuito PULLDOWN
//Una resistencia de 1K antes de poner a tierra
// el pulsador, sino hace corto
//lee LOW en circuito abierto
//lee HIGH en circuito cerrado

void setup()
{
  pinMode(BOTON, INPUT);
  pinMode(LED, OUTPUT);
}

void loop()
{
  digitalWrite(LED, digitalRead(BOTON));
}