// Program that prints a histogram for word length in input

#include <stdio.h>

#define INSIDE 1    // Inside a word
#define OUTSIDE 0   // Outside a word
#define BUFFER 100  // Need to create a max amount of words to create space for the array

int main() {
    int c, i;
    int state = OUTSIDE;
    int length = 0; // length of each word
    int nwords = 0; // number of words
    int max_length = 0; // maximum word length encountered

    int histogram[BUFFER];

    // Initialize the array
    for (i = 0; i < BUFFER; ++i) {
        histogram[i] = 0;
    }

    // Read input and count word lengths
    while ((c = getchar()) != EOF) {
        if (c == ' ' || c == '\n' || c == '\t') {
            if (state == INSIDE) {
                ++histogram[length]; // increment the histogram count for the current word length
                if (length > max_length) {
                    max_length = length; // update maximum word length
                }
                length = 0; // reset word length for the next word
            }
            state = OUTSIDE;
        } else {
            state = INSIDE;
            ++length; // increment word length
        }
    }

    // Print histogram
    printf("Word Length Histogram:\n");
    for (i = 1; i <= max_length; ++i) {
        printf("%2d |", i); // print word length
        for (int j = 0; j < histogram[i]; ++j) {
            printf(" *"); // print asterisks for each occurrence of the word length
        }
        printf("\n");
    }

    return 0;
}
