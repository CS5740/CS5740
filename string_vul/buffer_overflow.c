#include "stdlib.h"
#include "stdio.h"
#include "string.h"
int IsPasswordOK(void) 
{
 char Password[12]; // Memory storage for pwd
 gets(Password);    // Get input from keyboard
// printf("%s\n", Password);

 if (!strcmp(Password, "goodpass")) 
	return 1; // Password Good
 else 
  	return 0; // Password Invalid
}

void main(void) {	
 int PwStatus;              // Password Status
  puts("Enter Password:");    // Print
 PwStatus=IsPasswordOK();    // Get & Check Password
 if (PwStatus == 0) {
      puts("Access denied"); // Print
      exit(-1);              // Terminate Program
 }
 else puts("Access granted");// Print
}

