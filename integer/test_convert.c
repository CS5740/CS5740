#define UINT_MAX 4294967295
#include "stdio.h"
int main(int argc, char **argv)
{
	unsigned int a = UINT_MAX;

	char c = -1;

	if(c == a)
	{
		printf("-1 == %u\n", a);
	}
}
