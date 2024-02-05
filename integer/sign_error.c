#include "stdio.h"
#include "string.h"
#define BUFF_SIZE 10
int main(int argc, char **argv)
{
	int len;
	char buf[BUFF_SIZE];
	len = -1;
	if(len < BUFF_SIZE) memcpy(buf, argv[1], len);
	else printf("Fail\n");
	return 0;
}
