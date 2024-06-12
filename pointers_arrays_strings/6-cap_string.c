#include "main.h"

/**
 * cap_string - Capitalizes all words of a string
 * @str: The string to be modified
 *
 * Description: This function takes a string and capitalizes the first letter
 * of each word. Words are considered to be separated by any of the following
 * characters: space, tabulation, new line, ,, ;, ., !, ?, ", (, ), {, and }.
 *
 * Return: The modified string with capitalized words
 */

char *cap_string(char *str)
{

char sep[] = { ' ', '\t', '\n', ',', ';', '.', '!', '?', '"', '(', ')', '{', '}', '\0' };
char *ptr = str;
int capnxt = 1;

while (*ptr != '\0')
{
if (capnxt && *ptr >= 'a' && *ptr <= 'z')
{
*ptr -= 32;
capnxt = 0;
}
else 
{
int is_sep = 0;
int i;
for (i = 0; sep[i] != '\0'; i++)
{
if (*ptr == sep[i])
{
is_sep = 1;
break;
}
}
if (is_sep)
{
 capnxt =1;
}
else
{
capnxt = 0;
}
}
ptr++;
}
return (str);
}
