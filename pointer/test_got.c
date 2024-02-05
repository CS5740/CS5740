#include "stdio.h"
#include "stdlib.h"
int main(int argc, char **argv)
{
	char tem[100];

	puts("Enter the password:");
	gets(tem);
	printf("%s\n", tem);
	exit(0);
}
