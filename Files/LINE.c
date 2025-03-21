/* get line file LINE.c */ 
#include "Header/H.h"
#define H_H 
#define MAX_LINE_LENGTH 1000  // Maximum line length to store (can be adjusted)
 



int main() {
	char *longest_line = NULL;
    char *current_line = NULL;
    size_t longest_length = 0  ;
    size_t current_length = 0 ;
    size_t size_buffer = MAX_LINE_LENGTH ;
    // Allocate memory for the current line 
    current_line = malloc(size_buffer);
    if (current_line == NULL) {
        fprintf(stderr, "Memory allocation failed \n");
        return 1;
    }

    // Read lines until EOF 
    while ((current_length = get_line(&current_line, &size_buffer)) > 0) {
        
        if (current_length > longest_length) {
            longest_length = current_length;
            //  Allocate memory for the longest line 
            longest_line = realloc(longest_line, current_length + 1 );
            if (longest_line == NULL) {
                fprintf(stderr, " Memory allocation failed \n");
                free(current_line); 
                return 1;
            }

            // copy the current line to the longest line 
            strcpy(longest_line , current_line);
        }
    }

    if (longest_length > 0) {
        printf("Length of the longest line : %3d \n", longest_length);
        printf("Content of the longest line : %s \n",longest_line);
    }
    else {
        printf(" No input line were read.  \n");
    }
    // Free allocated memory
    free(current_line);
    free(longest_line);
    return 0;
}