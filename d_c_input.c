 /* different characters in its input */
#include "Header/H.h"
#define H_H 
#define NUM_CHARS 128  // Number of ASCII characters (0-127)
#define Symbole '\xdc'


extern int Word_lenght[], length, nw, line, c;

int feri_char[NUM_CHARS] = {0} ;


int main() {

	printf("Enter text (Ctrl+D or Ctrl+Z to end):\n");
	RED();
	printf("\n");
	for (int i = 0; i < length; i++)
	{
		if (Word_lenght[i] > 0 && Word_lenght[i] <= NUM_CHARS) {
           feri_char[Word_lenght[i]]++;
		}
	}
     
    
  return 0;
}

















