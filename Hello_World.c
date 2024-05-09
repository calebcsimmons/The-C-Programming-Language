/* Hello World */

#include <stdio.h> // standard library

int main () {
	printf("Hello World\n");
}

int main() {
    int c;
    while (c != EOF) { // EOF is end of file character (cntrl + D)
        putchar(c);
        c = getchar();
    if (c == EOF)
        putchar(c);

    }
    
}