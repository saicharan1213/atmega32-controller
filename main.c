/*
 * GccApplication2.c
 *
 * Created: 08-05-2021 22:18:49
 * Author : A.C.E
 */ 

#include <avr/io.h>
#include <util/delay.h>
#define F_CPU  16000000
int main(void)
{
	DDRB |= (1<<0);//out
	DDRB &= ~(1<<1);//in
	PORTB |= (1<<1);
    /* Replace with your application code */
    while (1) 
    {
		if (!PINB & 0x01)//switch connected to portb.1
		{
			PORTB |=(1<<0);
		}
		if(!(!PORTB & 0x01))
		{
			PORTB &=~(1<<0);
		}
		}
		
    }


