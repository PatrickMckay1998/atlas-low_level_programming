#include <stdio.h>

int main(void)
{ 
	int integerType;
	char charType;
	long longType;
	long long longlongType;
	float floatType;

printf("Size of a char is: %zu\n", sizeof(charType));
printf("\nSize of an int is: %zu\n", sizeof(integerType));
printf("\nSize of a long int is: %zu\n", sizeof(longType));
printf("\nSize of a long long int is: %zu\n", sizeof(longlongType));
printf("\nSize of a float is: %zu\n", sizeof(floatType));
return(0);
}
