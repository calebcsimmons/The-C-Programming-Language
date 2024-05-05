// Histogram of Character Frequency

#include <stdio.h>

#define NUM_CHARS 128 // Assuming ASCII characters

int main() {
    int c;

    // Array to store frequencies of characters.
    int frequencies[NUM_CHARS] = {0};  // Notice this is another way to initialize an array!

    // Read input and count character frequencies
    while ((c = getchar()) != EOF) {
        if (c >= 0 && c < NUM_CHARS) {
            ++frequencies[c]; // Increment frequency count for the character
        }
    }

    // Print histogram
    printf("Character Frequency Histogram:\n");
    for (int i = 0; i < NUM_CHARS; ++i) {
        if (frequencies[i] > 0) {
            printf("%c |", i); // Print character
            for (int j = 0; j < frequencies[i]; ++j) {
                printf(" *"); // Print asterisks for each occurrence of the character
            }
            printf("\n");
        }
    }

    return 0;
}
