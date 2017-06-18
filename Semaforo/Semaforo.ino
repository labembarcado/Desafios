
const long led_verde    = 30000;
const long led_amarelo  =  5000;
const long led_vermelho = 15000;

void mytime(unsigned int value);

int main() 
{
  // put your main code here, to run repeatedly:

    DDRB = 0b0000111;

    while(1){
    PORTB = 0b00000001;
    mytime(led_verde);

    PORTB = 0b00000010;
    mytime(led_amarelo);
  
    PORTB = 0b00000100;
    mytime(led_vermelho);
    }

    return 0;
}

void mytime(unsigned int value)
{
  unsigned long slap = 0;
  
  slap = millis();
  
  while((millis() - slap) < value);
}

