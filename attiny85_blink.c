// Blink program for attiny85
// http://imakeprojects.com/Projects/avr-tutorial/

int main(void)
{
  // Set Port B pins for 3 and 4 as outputs
  // PORTB bit 3 = physical pin #2 on the ATTINY85
  // PORTB bit 4 = physical pin #3 on the ATTINY85

  DDRB = 0x18;  // In binary this is 0001 1000 (note that is bit 3 and 4)
  // AVR-GCC also would accept 0b00011000, by the way.

  // Set up a forever loop using your favorite C-style 'for' loop
  for ( ; 1==1 ; )  // loop while 1 equals 1
  {
    // Set Port B pins for 3 and 4 as HIGH (i.e. turn the LEDs on)
    PORTB = 0x18;   // If we wanted only PB4 on, it'd be PORTB=0x10

    // Use a function (defined in delay.h) to pause 100 milliseconds
    delay_ms(1000);

    // Set PORTB to be all LOWs (i.e. turn the LEDs off)
    PORTB = 0x00;

    // Delay for a 200ms
    delay_ms(1000);
  }

return 1;
}
