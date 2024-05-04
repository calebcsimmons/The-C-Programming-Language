#include <stdio.h>

// Counting lines in input

int main () {
    int c, nlines; //nlines is total number of lines detected

    nlines = 0;
    while ((c = getchar()) != EOF) {
        if (c == '\n') {
            ++nlines;
        }
    }
    printf("total lines are: %d\n", nlines);

}