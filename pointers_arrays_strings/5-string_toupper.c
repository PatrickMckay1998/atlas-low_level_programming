#include "main.h"

char *string_toupper(char *m)
{	
	while (*m != '\0')
	{
		m = m + 32;
		m++;
	}
	return(m);
	
}
