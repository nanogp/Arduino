#define LED 10
#define BOTON 7

//Circuito PULLUP
//Una resistencia de 1K antes de poner a tierra el pulsador
//lee HIGH en circuito abierto
//lee LOW en circuito cerrado

void setup()
{
  pinMode(BOTON, INPUT);
  pinMode(LED, OUTPUT);
}

void loop()
{
  digitalWrite(LED, !digitalRead(BOTON));
}