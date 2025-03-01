/* H.h File */
#ifndef H_H 
#define H_H 
#include <stdio.h> // Include libiroy
#define MAX_WORD 1000 // Maximun Word 
int  Word_lenght[MAX_WORD]; // Length Word Array 
int length = 0;  // Lenght charachter 
int nw;  // count Word 
int line; // count new  line 
int  c;  // charachter

int RED(); // Read Input CHaracter 

#endif

#ifdef H_H

int RED() {
	extern int Word_lenght[] , length , nw , line , c ;
	  while ((c = getchar()) != EOF) {
		Word_lenght[++length] = c;
		if (c == '\n') {
			++line;
		}
		else if (c == ' ' || c == '\t' || c == '\n') {
			++nw;
		}
	}
   return 0;
}

#endif // 
