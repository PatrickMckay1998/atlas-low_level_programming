#include "main.h"

/**
 * prints the aplphabet in lowercase
 *
 * Return: Always 0
 *
 * 
*/
int _putchar(char c);

void print_alphabet(void)
{
	char c;
	for(c = 'a' ; c <= 'z'; c++) 
	{
		_putchar(c);
	}
	_putchar('\n');
}
