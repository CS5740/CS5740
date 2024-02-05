#include "stdio.h"
#include "string.h"
#include "stdlib.h"
static int protected_value = 100;

int main(int argc, char **argv)
{
//	char buff[10];
	int val = 10;
	int *ptr;
	char buff[10];
	printf("The protected value: %d\n", protected_value);	
	printf("ptr: %p\n", ptr);
	strcpy(buff, argv[1]);

	*ptr = val;

	printf("The protected value: %d\n", protected_value);
	printf("ptr: %p\n", ptr);
}
