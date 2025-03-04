/* H.h File */
#ifndef H_H 
#define H_H 
#include <stdio.h> // Include libiroy
#define MAX_WORD 1000 // Maximun Word 
#define Symbole '\xdc'
int  Word_length[MAX_WORD]; // Length Word Array 
int length = 0;  // Lenght charachter 
int nw;  // count Word 
int line; // count new  line 
int  c;  // charachter

int RED(); // Read Input CHaracter 
void add_Blanks(int Word_lenght[], int length, int BLANKS);

void Character_Frequency_Histogram(int Word_length[], int length, int Frequency_char[], int NUM_CHARS);
void Vertical_Word_length_Histogram(int Word_length[], int length, int lengths[]);
void Word_Length_Histogram_Horizontal (int Word_length[], int length, int lengths[]);
void Word_print_line(int Word_lenght[], int length);
void print_With_Symbole(int Word_lenght[], int length);


#endif

#ifdef H_H

int RED() {
	extern int Word_length[] , length , nw , line , c ;
	  while ((c = getchar()) != EOF) {
		Word_length[++length] = c;
		if (c == '\n') {
			++line;
		}
		else if (c == ' ' || c == '\t' || c == '\n') {
			++nw;
		}
	}
   return 0;
}

void Word_print_line(int Word_lenght[], int length) {
	for (size_t i = 1; i <= length; i++)
	{
		if (Word_lenght[i] == ' ') {

			putchar('\n');
		}
		else
			printf("%c", Word_lenght[i]);
	}
}
void print_With_Symbole(int Word_lenght[], int length) {
	for (size_t i = 1; i <= length; i++)
	{
		if (Word_lenght[i] == ' ') {

			putchar(' ');	putchar('\\');	putchar('b'); putchar(' ');
		}
		else if (Word_lenght[i] == '\t') {
			putchar(' ');putchar('\\');putchar('t');putchar(' ');
		}
		else if (Word_lenght[i] == '\\') {
			putchar(' ');putchar('\\');	putchar('\\');putchar(' ');
		}
		else if (Word_lenght[i] == '/') {
			putchar(' ');putchar('/');	putchar('/');putchar(' ');
		}
		else
			printf("%c", Word_lenght[i]);

	}
}

void add_Blanks(int Word_length[], int length, int BLANKS) {
	for (size_t i = 1; i <= length; i++)
	{
		if (Word_length[i] == ' ') {
			for (size_t i = 0; i < BLANKS; i++)
			{
				putchar(' ');
			}
		}
		else
			printf("%c", Word_length[i]);

	}
}

void Character_Frequency_Histogram(int Word_length[], int length, int Frequency_char[], int NUM_CHARS) {
    for (int i = 0; i < length; i++)
    {
        if (Word_length[i] > 0 && Word_length[i] <= NUM_CHARS) {
            Frequency_char[Word_length[i]]++;
        }
    }
    // Print the horizontal histogram
    printf("Character Frequency Histogram (Horizontal):\n");
    for (int i = 0; i < NUM_CHARS; i++) {
        if (Frequency_char[i] > 0) {
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
            for (int j = 0; j < Frequency_char[i]; j++) {
                printf("%c ", Symbole);  // Use a block character for the bar
            }
            printf("\n");
        }
    }
}

void Word_Length_Histogram_Horizontal(int Word_length[], int length, int lengths[]) {
	int count = 0;
	int count_Array = 0;
	for (size_t i = 1; i <= length; i++)
	{
		if (Word_length[i] == '\n' || Word_length[i] == '\t' || Word_length[i] == ' ') {
			lengths[count_Array] = count;
			count_Array++;
			count = 0;
		}
		else
			count++;
		lengths[count_Array] = count;
	}
	// Print the horizontal histogram
	printf("Word Length Histogram (Horizontal):\n");
	for (int i = 0; i <= nw; i++) {
		printf("%2d: ", i);
		for (int j = 0; j <= lengths[i]; j++) {
			putchar(Symbole);  // Use a block character for the bar
		}
		printf(" (%d) \n", lengths[i] + 1);
	}
	printf("\n");
}

void Vertical_Word_length_Histogram(int Word_length[], int length, int lengths[]) {
	int MAX_Word_length = 0;
	int MAX_lengths = 20;
	int count = 0;
	int count_Array = 0;
	for (size_t i = 1; i <= length; i++)
	{
		if (Word_length[i] == '\n' || Word_length[i] == '\t' || Word_length[i] == ' ') {
			lengths[count_Array] = count;
			count_Array++;
			count = 0;
		}
		else
			count++;
		lengths[count_Array] = count;
	}

	for (int i = 0; i <= nw; i++)
	{
		if (lengths[i] > MAX_Word_length) {
			MAX_Word_length = lengths[i];
		}

	}
	// Print Vertical Histogram
	printf("\nVertical Word Length Histogram:\n\n");
	for (int i = MAX_Word_length; i > 0; i--) {
		printf(" |");
		for (int j = 0; j <= MAX_lengths; j++) {

			if (lengths[j] > 0) {  // Only show columns with data
				printf(" ");
				if (lengths[j] >= i)
					putchar(Symbole); // Using block character for better visual
				else
					printf(" ");
			}

		}
		printf("\n");
	}
	putchar(' ');
	for (size_t i = 0; i < MAX_Word_length * 2; i++)
	{
		putchar('-');
	}
	printf("\n  ");
	for (size_t i = 0; i < count_Array; i++)
	{
		printf("%2d", lengths[i] + 1);
	}
}









#endif // 
