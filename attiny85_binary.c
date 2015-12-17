// https://www.youtube.com/watch?v=h7qVAebM01Q
//https://www.youtube.com/watch?v=mXPyRF-_Y1E
//https://www.youtube.com/watch?v=Tj6xGtwOlB4


//<VARIABLES>
#define port3StateOutput DDRB = 1<<PINB3
#define ledOn3 PORTB = 1<<PINB3
#define ledOff3 PORTB = 0<<PINB3

#define binaryDdrb DDRB = 0b00001000

#define delayMS 1000
//</>

int main(void)
{
 // Clock to 1mhz
//pinmode(pin3,OUTPUT);

  // port B3 and B4
  DDRB = 0b00011000;


  for ( ; 1==1 ; )
  {
  
    // port B3
    //digitalwrite(led,HIGH);
    PORTB = 0b00001000;

    delay_ms(delayMS);

  // port B4
    // Digitalwrite(led,LOW);
    PORTB = 0b00010000;
    
    delay_ms(delayMS);
  
  // port B3 and B4
   // Digitalwrite(led,LOW);
    PORTB = 0b00011000;
    
    delay_ms(delayMS);
    
      // Digitalwrite(led,LOW);
    PORTB = 0b00000000;

    delay_ms(delayMS);
  }

return 1;
}
