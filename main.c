#include "lcd12864.h"
#include "bitmaps.h"

void main(void){
	SysCtlClockSet(SYSCTL_SYSDIV_4 | SYSCTL_USE_PLL | SYSCTL_OSC_MAIN | SYSCTL_XTAL_16MHZ);


	LCD_init();

	LCD_ROM_string(" hello");
	LCD_set_cursor(0, 0);

	LCD_ROM_string(">");
	while(1);
}
