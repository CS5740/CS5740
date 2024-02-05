#include "stdio.h"
#define INT_MAX 2147483647
#define UINT_MAX 4294967295
#define INT_MIN -2147483648
int main(int argc, char **argv)
{
	int i;
	unsigned int j;

	i = INT_MAX;
	i++;
	printf("i=%d\n", i);

	j = UINT_MAX;
	j++;
	printf("j = %u\n", j);

	i = INT_MIN;	
	i--;
	printf("i = %d\n", i);

	j = 0;
	j--;
	printf("j=%u\n", j);

}
