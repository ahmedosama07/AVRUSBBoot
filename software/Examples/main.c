/*
 * Blink.c
 *
 * Created: 12/18/2023 9:36:15 AM
 * Author : LEGION
 */ 
#include "AVRUSBBOOT.h"

int main(void)
{
	DDRC = 0x03;
	PORTC = 0x00;
	
	while(1)
	{
		//TODO:: Please write your application code
		PORTC |= (1 << PINC0);
		PORTC &= ~(1 << PINC1);
		_delay_ms(1000);
		
		PORTC &= ~(1 << PINC0);
		PORTC |= (1 << PINC1);
		_delay_ms(1000);
		
		wait();
	}
}
