// <COMMENT>
// place bat file where the hex file is located
// code for microcontroller = t85
// file to upload to microcontroller = avrproject1.hex
// avr microcontroller programmer code = usbasp
// </END COMMENT>

avrdude -c usbasp -p t85 -u -U flash:w:avrproject1.hex
pause
