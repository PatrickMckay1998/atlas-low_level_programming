#include "main.h"

/**
 * main - prints out "_putchar" without using the stdio.h library
 *
 * Return - Always zero
 *
 * 
 */

int main(void)
{
	char *str = "_putchar";
	while (*str)
	{
		_putchar(*str++);	
	}
	_putchar("\n");
	return(0);
}
