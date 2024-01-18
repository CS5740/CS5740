#include "stdio.h"
#include "stdlib.h"

int main(int argc, char **argv)
{
	char Password[9];
	puts("Enter 8 character password:");
        gets(Password);
	printf("%s\n", Password);

}
