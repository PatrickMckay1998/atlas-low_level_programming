#include <stdio.h>

int main(void) 
{
	char nico;
	for (nico = 0; nico <= 15; nico++) 
		{
			putchar(nico + '0');
		}
	putchar('\n');
	return(0);
}
