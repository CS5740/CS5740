#include "stdio.h"
#include "stdlib.h"
#include "string.h"
void malicious_code(const char *str)
{
	printf("Malicious code is invoked\n");
	system("/bin/sh");
}

void good_function(const char *str)
{
	printf("%s", str);
}

int main(int argc, char **argv)
{
	void (*funcPtr)(const char *str);
	char buff[10];
	funcPtr = &good_function;
	strcpy(buff, argv[1]);
	(void)(*funcPtr)("hi ");
	return 0;
}
