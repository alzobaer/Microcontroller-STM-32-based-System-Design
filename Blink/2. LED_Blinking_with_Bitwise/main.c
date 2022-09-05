/*
***Go to "6.3.9 RCC AHB1 peripheral clock enable register"***
	1. enable the clock for PORT A
	2. make u=output for PORT A
	3. turn on and off the bit
*/

#include <stm32f401xc.h>

void delayMS(int delay){
	int i;
	 for ( ; delay > 0; delay--)
		 for(i = 0; i <= 3195; i++);	 
}

int main(){

	RCC->AHB1ENR |= (1 << 0);  /*enable PORT A clock */
	GPIOA->MODER |= (1 << 10);	/* make as output */
	
	while(1){
		
		GPIOA->ODR |= (1 << 5);
		delayMS(100);
		GPIOA->ODR &= ~(1 << 5);
		delayMS(100);
	}

}

