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
    // Print the horizontal histogram
    printf("Character Frequency Histogram (Horizontal):\n");
    for (int i = 0; i < NUM_CHARS; i++) {
        if (feri_char[i] > 0) {
            // Print the character (escape special characters)
            if (i == '\n') {
                printf("\\n : ");
            }
            else if (i == '\t') {
                printf("\\t : ");
            }
            else if (i == ' ') {
                printf("' ': ");
            }
            else {
                printf("%2c : ", i);
            }

            // Print the bar for the frequency
            for (int j = 0; j < feri_char[i]; j++) {
                printf("%c ",Symbole);  // Use a block character for the bar
            }
            printf("\n");
        }
    }
     
    
  return 0;
}

















