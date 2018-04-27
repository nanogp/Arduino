/*
FLIPFLOP CON PULLUP
Falla por rebote o bouncing por el pulsador
Arduino detecta ese rebote entre alto y bajo del pulsador
Se soluciona por hardware con un capacitor con la resistencia
Se soluciona por software con un delay
Se agrega estadoAnteriorBoton sino no detecta el 
cambio del boton cuandose lo mantiene apretado y titila el led
*/

int led = 12;
int boton = 4;
int estadoLed = 0;
int estadoAnteriorBoton = 0;
int estadoBoton;

void setup()
{
  pinMode(boton, INPUT);
  pinMode(led, OUTPUT);
  digitalWrite(led, LOW);
}

void loop()
{
  estadoBoton = !digitalRead(boton);
  
  if(estadoAnteriorBoton != estadoBoton)
  {
    if(estadoBoton == HIGH)
    {
      estadoLed = 1 - estadoLed;
      digitalWrite(led, estadoLed);
      delay(250);
    }
  	estadoAnteriorBoton = estadoBoton;
  }
}