#include "stdio.h"
#include "stdlib.h"
#include "string.h"
int main(int argc, char **argv)
{
	char a[16];
	char b[16];
	char c[32];

	strcpy(a, "0123456789abcdef");
	printf("%s\n", a);
	strcpy(b, "0123456789abcdef");
	printf("%s\n", b);
	strcpy(c, a);
	printf("%s\n", c);
}
