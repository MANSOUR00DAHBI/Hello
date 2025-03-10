 /* Name Character by Hixadicemle */


#include <stdio.h>

int main() {
	for (int i = 0; i < 256;++i) {
		printf("| %2x | %2c | ", i, i);
	}
putchar('\n');
   return 0;
}