/* Replacing Each Single  */
#include "Header/H.h"
#define H_H 
#define BLANKS 4
extern int Word_linght[], length, nw, line, c;

int main() {
	RED();
	printf("\n");
	printf("*- Linght : %d Word : %d line : %d\n", length, nw, line);
	for (size_t i = 1; i <= length; i++)
	{
		if (Word_linght[i] == ' ') {

			putchar(' ');	putchar('\\');	putchar('b'); putchar(' ');
		}
		else if (Word_linght[i] == '\t') {
			putchar(' ')	;putchar('\\');putchar('t');putchar(' ');
		}
		else if (Word_linght[i] == '\\') {
			putchar(' ')	;putchar('\\');	putchar('\\');putchar(' ');
		}
		else if (Word_linght[i] == '/') {
			putchar(' ')	;putchar('/');	putchar('/');putchar(' ');
		}
		else
			printf("%c", Word_linght[i]);

	}
	printf("\n");
	return 0;
}