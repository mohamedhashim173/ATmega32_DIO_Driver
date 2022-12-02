/*
 * main.c
 *
 *  Created on: Sep 25, 2022
 *      Author: Mohamed Hashim Attiya Said
 */


#include <avr/io.h>
#include <util/delay.h>

#include "STD_TYPES.h"
#include "BIT_MATH.h"

#include "DIO_interface.h"


// Blinking LED
void main(void)
{
	DIO_voidSetPinDirection(DIO_u8PORTA, DIO_u8PIN0, DIO_u8PIN_OUTPUT);

	while(1)
	{
		DIO_voidSetPinValue(DIO_u8PORTA, DIO_u8PIN0, DIO_u8PIN_HIGH);
		_delay_ms(500);
		DIO_voidSetPinValue(DIO_u8PORTA, DIO_u8PIN0, DIO_u8PIN_LOW);
		_delay_ms(500);
	}
}


