#define LED 10
#define TIEMPO_ESPERA 20
int i;

void setup()
{
  pinMode(LED, OUTPUT);
}

void loop()
{
	fadeIn(LED, TIEMPO_ESPERA);
	delay(1000);
	fadeOut(LED, TIEMPO_ESPERA);
}

void fadeIn(int pin, int time)
{
	for(i=0 ; i< 256 ; i++)
	{
		analogWrite(pin, i);
		delay(time);
	}
}

void fadeOut(int pin, int time)
{
 for(i=255 ; i>= 0 ; i--)
	{
		analogWrite(pin, i);
		delay(time);
	}
}