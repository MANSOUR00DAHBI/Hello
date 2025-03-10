 /* different characters in its input */
#include "Header/H.h"
#define H_H 
#define NUM_CHARS 128  // Number of ASCII characters (0-127)



extern int Word_length[], length, nw, line, c;

int Frequency_char[NUM_CHARS] = {0} ;


int main() {

	printf("Enter text (Ctrl+D or Ctrl+Z to end):\n");
	RED(); // Read Input 
    Character_Frequency_Histogram( Word_length,  length,  Frequency_char,  NUM_CHARS);
	printf("\n");
	
     
    
  return 0;
}

















