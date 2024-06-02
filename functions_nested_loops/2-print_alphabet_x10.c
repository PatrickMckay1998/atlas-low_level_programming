#include "main.h"
/*
 * prints the aplhabet 10 times
 *
 *
 */

void print_alphabet_x10(void)
{
	for(j = 0; j <= 10; j++)
	{
		for(i = 'a' ; i <= 'z'; i++)
        	{
                	_putchar(i);
        	}
	}	
        _putchar('\n');	
}
