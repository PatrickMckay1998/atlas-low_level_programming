#include <stdio.h>

int main(void)
{ 
	int integerType;
	char charType;
	long longType;
	long long longlongType;
	float floatType;

printf("Size of a char is:", sizeof(charType));
printf("Size of an int is:", sizeof(integerType));
printf("Size of a long int is:", sizeof(longType));
printf("Size of a long long int is:", sizeof(longlongType));
printf("Size of a float is:", sizeof(floatType));
return(0);
}
