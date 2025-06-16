#include "Header/H.h"
#define H_H 
#define BLANKS 4
extern int Word_length[], length, nw, line, c;

int main() {
     //ptr();
    RED();
	printf("\n");
	printf("*- Linght : %d Word : %d line : %d\n", length, nw, line);
    add_Blanks(Word_length,length, BLANKS);

	printf("\n");
	return 0;
}