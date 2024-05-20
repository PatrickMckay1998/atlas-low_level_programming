#include <stdio.h>

int main(void) {
	char al;
	char AL; 
for((al = 'a' ; al <= 'z' ; al++)(AL = 'A' ; AL <= 'Z' ; AL++)) {
	putchar(al);		
	putchar(AL); 
	}
	putchar("\n");
	return(0);
}
