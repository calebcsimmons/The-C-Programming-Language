/* Hello World */

#include <stdio.h>

int main () {
	printf("Hello World\n");
}

#include <stdio.h>

int main() {
    int c;
    while (c != EOF) {
        putchar(c);
        c = getchar();
    if (c == EOF)
        putchar(c);

    }
    
}