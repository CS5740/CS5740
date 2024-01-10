#include "stdio.h"
#include "stdlib.h"
int main(int argc, char **argv)
{
	char command[100];
	char name[50];
	puts("Enter your name:");
	gets(name);
	sprintf(command, "echo %s", name);
	system(command);
}

