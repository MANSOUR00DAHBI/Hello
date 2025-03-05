/* Replacing Each Single  */
#include "Header/H.h"
#define H_H 

extern int Word_length[], length, nw, line, c;

int main() {
	RED();
	printf("\n");
	printf("*- Linght : %d Word : %d line : %d\n", length, nw, line);
	print_With_Symbole(Word_length, length);
	printf("\n");
	return 0;
}