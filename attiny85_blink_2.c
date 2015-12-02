// https://www.youtube.com/watch?v=h7qVAebM01Q
// blink led for attiny85

int main(void)
{
 // Clock to 1mhz
//pinmode(pin3,OUTPUT);

  DDRB = 1<<PINB3;


  for ( ; 1==1 ; )
  {
    //digitalwrite(led,HIGH);
    PORTB = 1<<PINB3;


    delay_ms(1000);

    // Digitalwrite(led,LOW);
    PORTB = 0<<PINB3;

    delay_ms(1000);
  }

return 1;
}
