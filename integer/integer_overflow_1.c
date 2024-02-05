#include "string.h"
#include "stdlib.h"
#include "stdio.h"
void getComment(unsigned int len, char *src)
{
	unsigned int size;
	size = len - 2;

	printf("size: %u\n", size);
	char *comment = (char *)malloc(size + 1);
	memcpy(comment, src, size);
	return;
}

int main(int argc, char **argv)
{
	getComment(0, "Comment ");
	return 0;
}
