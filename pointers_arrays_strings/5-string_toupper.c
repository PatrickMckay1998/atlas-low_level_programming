#include "main.h"

char *string_toupper(char *m)
{	char *copy_m = m;

	while (*copy_m != '\0')
	{
		m -= 32;
		m++;
		copy_m ++;
	}
	return(m);
	
}
