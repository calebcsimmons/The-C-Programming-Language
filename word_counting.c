// Word counting and Listing program

#include <stdio.h>

#define INSIDE 1    // Inside a word
#define OUTSIDE 0   // Outside a word

int main() {
    int c, nwords, state;

    state = OUTSIDE;
    nwords = 0;

    while ((c = getchar()) != EOF) {
        if (c == ' ' || c == '\n' || c == '\t') {
            state = OUTSIDE;
            putchar('\n');
        } 
        
        else if (state == OUTSIDE) {
            state = INSIDE;
            putchar(c);
            ++nwords;
        }
            
        else if (state == INSIDE) {
            putchar(c);
        }
        
    }

    printf("There are %d words\n", nwords);

    return 0;
}
