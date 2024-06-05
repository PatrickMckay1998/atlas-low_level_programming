#include "main.h"
/*
 * check the sign of a character
 *
 */

 int print_sign(int n)
{
    if(n >= 1)
	{
		_putchar('+');
		return (1);
	}	
    	else if (n <= -1) 
		{
			_putchar('-');
			return('/');
		}
		else 
			{
				_putchar(0);
				return (0);
			}	
}
