#include "stdio.h"
#include "stdlib.h"

static void create(void) 
	__attribute__((constructor));
static void destroy(void)
	__attribute__((destructor));

int main(int argc, char **argv)
{

}

void create(void)
{
	printf("Constructor is called.\n");
}

void destroy(void)
{
	printf("Destructor is called.\n");
}
