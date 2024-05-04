// Word counting program

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
        } else if (state == OUTSIDE) {
            state = INSIDE;
            ++nwords;
        }
    }

    printf("There are %d words\n", nwords);

    return 0;
}
