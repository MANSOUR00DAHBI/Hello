#include <stdio.h>
#define MAX_WORD 1000
int  Word_linght[MAX_WORD];
int length = 0 ;
int nw ;
int line ;
int  c;

int Get() {
	return c = getchar();
}

int  main(void)
{
   //c = length = 0;
    
	while (Get() != EOF && c != '^') {
         Word_linght[++length] = c;
		if (c == '\n') {
			++line;
		}
		else if (c == ' ' || c == '\t' || c == '\n') {
			++nw;
		 }
          
	}
    printf("*- Linght : %d Word : %d line : %d\n", length,nw , line);
	for (size_t i = 1; i <= length; i++)
	{
		printf("%c",Word_linght[i]);
	}
    printf("\n");
	return 0;
}