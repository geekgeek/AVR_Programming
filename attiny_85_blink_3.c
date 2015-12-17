// https://www.youtube.com/watch?v=h7qVAebM01Q
//https://www.youtube.com/watch?v=mXPyRF-_Y1E

//<VARIABLES>
#define port3StateOutput DDRB = 1<<PINB3
#define ledOn3 PORTB = 1<<PINB3
#define ledOff3 PORTB = 0<<PINB3
//</>

int main(void)
{
 // Clock to 1mhz
//pinmode(pin3,OUTPUT);

  port3StateOutput;

  for ( ; 1==1 ; )
  {
    //digitalwrite(led,HIGH);
    ledOn3;

    delay_ms(500);

    // Digitalwrite(led,LOW);
    ledOff3;
    
    delay_ms(500);
  }

return 1;
}
