//LUZ DE PASILLO CON PULLUP

int led = 12;
int boton = 4;
int tiempoEncendido = 5000;

void setup()
{
  pinMode(4, INPUT);
  pinMode(12, OUTPUT);
}

void loop()
{
  if(!digitalRead(boton) == HIGH)
  {
  	digitalWrite(led, HIGH);
    delay(tiempoEncendido);
  	digitalWrite(led, LOW);
  }
}