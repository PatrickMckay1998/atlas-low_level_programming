#include "main.h"

char *_strcat(char *dest, char *src)
{
	while (*dest) 
	{
        	++dest;
    	}	
    	while (*src) 
    	{
        	*dest++ = *src++;
		*dest = '\0';
    	}
    return(0);
}
