#include "main.h"

char *_strcat(char *dest, char *src)
{
	while (*dest) 
	{
        	++dest;
    	}	

    // Copy characters of the second string to the end of
    // the first string
    	while (*src) 
    	{
        	*dest++ = *src++;
    	}

    // Add the null-terminating character
    *dest = '\0';
}
