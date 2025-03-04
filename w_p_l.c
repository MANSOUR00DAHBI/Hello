/*Word per line*/
/* Replacing Each Single  */
#include "Header/H.h"
#define H_H 
extern int Word_lenght[], length, nw, line,c;



int main() {
	printf("Enter text (Ctrl+D or Ctrl+Z to end):\n");
	RED();
	printf("\n");
	printf("*- Linght : %d Word : %d line : %d\n", length, nw, line);
	Word_print_line( Word_lenght, length);
	printf("\n");
	return 0;
}