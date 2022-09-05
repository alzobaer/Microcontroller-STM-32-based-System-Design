/*
***Go to "6.3.9 RCC AHB1 peripheral clock enable register"***
	1. enable the clock for PORT A
	2. make u=output for PORT A
	3. turn on and off the bit
*/

#include <stm32f401xc.h>

int main(void){

	RCC->AHB1ENR |= 0x00000001;  /*enable PORT A clock */
	GPIOA->MODER |= 0x00000400;	/* make as output */
	
	while(1){
		
		/*GPIOA->ODR |= 0x00000020;*/
		GPIOA->ODR &= ~(0x00000020);

	}

}