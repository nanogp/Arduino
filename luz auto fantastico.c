#define CANT_LEDS 5
#define ESPERA 200

int leds[]={2,4,7,12,13};
int cantLeds = CANT_LEDS;
int tiempoEspera = ESPERA;
int i;

void encenderHaciaDerecha(int leds[], int cantLeds, int tiempo);
void encenderHaciaIzquierda(int leds[], int cantLeds, int tiempo);
void enciendeEsperaApagaLed(int nroSalida, int tiempo);

void setup()
{
  for(i=0 ; i<cantLeds-1 ; i++)
  {
    pinMode(leds[i], OUTPUT);
  }
}

void loop()
{
	encenderHaciaDerecha(leds, cantLeds, tiempoEspera);
	encenderHaciaIzquierda(leds, cantLeds, tiempoEspera);
}

void encenderHaciaDerecha(int leds[], int cantLeds, int tiempo)
{
    for(i=0 ; i<cantLeds ; i++)
  {
    enciendeEsperaApagaLed(leds[i], tiempo);
  }
}

void encenderHaciaIzquierda(int leds[], int cantLeds, int tiempo)
  for(i=cantLeds-2 ; i>0 ; i--)
  {
    enciendeEsperaApagaLed(leds[i], tiempo);
  }


void enciendeEsperaApagaLed(int nroSalida, int tiempo)
{
   digitalWrite(nroSalida, HIGH);
   delay(tiempo);
   digitalWrite(nroSalida, LOW);
}


/*
 esto es para usar un solo for
 for(i=-3 ; i<CANT_LEDS ; i++)
  {
    enciendeEsperaApagaLed(leds[abs(i)]);
  }
*/
