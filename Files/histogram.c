/* Histogram horizontal and Vertical */
/* Word per line */
/* Replacing Each Single  */

#include "Header/H.h"
#define H_H 



extern int Word_length [], length, nw, line, c;

int lengths[100 + 1 ] = {0} ; // array save word count 

int main() {
  

	RED();
	printf("\n");
	printf("*- Linght : %d Word : %d line : %d\n", length, nw + 1, line);
	// Word Length Histogram(Horizontal)
      Word_Length_Histogram_Horizontal(Word_length , length , lengths);
  
     // Vertical Word Length Histogram 
    Vertical_Word_length_Histogram(Word_length,length, lengths);
printf("\n");


  
    return 0;
}























