/*Histogram horizontal and Vertical */
/*Word per line*/
/* Replacing Each Single  */
#include "Header/H.h"
#define H_H 
extern int Word_lenght [], length, nw, line, c;

int lenght_Word[100 + 1]={0};

int main() {
    int stat = 0 ;
    int count = 0 ;
    int count_Array = 20;
	RED();
	printf("\n");
	printf("*- Linght : %d Word : %d line : %d\n", length, nw, line);
	for (size_t i = 1; i <= length; i++)
	{         
		if (Word_lenght [i] == '\n' || Word_lenght[i] == '\t' || Word_lenght[i] == ' '){
           if(stat == 1){
			    if (count <= count_Array) {
					lenght_Word[count]++;
		        }else 
              lenght_Word[count_Array]++ ;
			  count= 0;
              stat = 0;
           }
		}else {
          stat = 1;
         ++count;
		}
	}

	if (stat == 1) {
		if (count > count_Array) {
			count = count_Array;
		}
		lenght_Word[count]++;
		count = 0;
		stat = 0;
	}
	// Print the horizontal histogram
	printf("Word Length Histogram (Horizontal):\n");
	for (int i = 1; i <= count_Array; i++) {
		printf("%2d: ", i);
		for (int j = 0; j <= lenght_Word[i]; j++) {
			printf("*");  // Use a block character for the bar
		}
		printf("\n");
	}
	printf("\n");
	
    return 0;
}