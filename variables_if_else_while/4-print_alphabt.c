#include <stdio.h>

int main(void) {
	char al;
	for(al = 'a' ; al <= 'z' ; al++) {
	if(al == 'q' || al == 'e') {
		continue;
		}
	putchar(al);
	}
	putchar('\n');
	return(0);
}
