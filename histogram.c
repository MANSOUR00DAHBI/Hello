/* Histogram horizontal and Vertical */
/* Word per line */
/* Replacing Each Single  */

#include "Header/H.h"
#define H_H 
#define IN 1
#define OUT 0 
extern int Word_lenght [], length, nw, line, c;

int lenght_Word[100 + 1]={0};
int lenghts[100 + 1 ];

int main() {
    int stat = OUT ;
    int count = 0 ;
    int count_Array = 0;
    printf("Enter text (Ctrl+D or Ctrl+Z to end):\n");
	RED();
	printf("\n");
	printf("*- Linght : %d Word : %d line : %d\n", length, nw + 1, line);
	for (size_t i = 1; i <= length; i++)
	{         
           
		if(Word_lenght [i] == '\n' || Word_lenght[i] == '\t' || Word_lenght[i] == ' '){
			lenghts[count_Array]= count;
			count_Array++;
               count = 0;		    
		}else
	      count++;
		lenghts[count_Array] = count;
		
	   
	}
printf("\n");

	// Print the horizontal histogram
	printf("Word Length Histogram (Horizontal):\n");
	for (int i = 0; i <= nw; i++) {
		printf("%2d: ", i);
		for (int j = 0; j <= lenghts[i]; j++) {
			printf("* ");  // Use a block character for the bar
		}
		printf(" (%d) \n" , lenghts[i]);
	}
	printf("\n");
	
    return 0;
}























