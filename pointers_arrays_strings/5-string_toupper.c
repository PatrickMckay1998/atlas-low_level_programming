#include "main.h"

char *string_toupper(char *)
{	
	int i;
	char m;
	while (m != '\0')
	{
		m[i] = m[i] + 32;
	}
	return(m);
	
}
