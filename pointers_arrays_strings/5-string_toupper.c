#include "main.h"

char *string_toupper(char *m)
{	
	int i = 0;
	while (*m != '\0')
	{
		m[i] = m[i] + 32;
		i++;
	}
	return(m);
	
}
