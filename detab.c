// Replaces all tabs with spaces

//steps//
// 1.) read each character of line
// 2.) if c = \t, 

#include <stdio.h>

#define TAB_WIDTH 4 // Define tab stop distance as a symbolic parameter

int main() {
    int c;
    int char_count = 0;

    while ((c = getchar()) != EOF) {
        if (c == '\t') { // Replace tabs with spaces
            int spaces_to_insert = TAB_WIDTH - (char_count % TAB_WIDTH);
            for (int i = 0; i < spaces_to_insert; ++i) {
                putchar('_');
                ++char_count;
            }
        } else {
            putchar(c);
            if (c == '\n') { // Reset character count at newlines
                char_count = 0;
            } else {
                ++char_count;
            }
        }
    }

    return 0;
}
