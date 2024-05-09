// Function to reverse all characters in a string

#include <stdio.h>
#include <string.h>
#define MAXLINE 1000

int custom_getline(char line[], int maxline) {
    int c;
    int i = 0; // Declare and initialize i closer to where it's used

    // Loop through all characters on every line
    while (i < (maxline - 1)) {
        c = getchar(); // Declare and initialize c inside the loop
        if (c == EOF && i == 0) {
            return 0; // Return standard EOF value (0) when encountering EOF without reading any characters
        }
        if (c == EOF || c == '\n') {
            break; // Break the loop on encountering EOF or newline
        }
        line[i++] = c; // Increment i after assigning c to line[i]
    }

    // Handle newline character
    if (c == '\n') {
        line[i++] = c;
    }

    // Append a null terminator to mark the end of the string of characters
    line[i] = '\0';

    return i; // Return the number of characters read
}

int main () {
    char line[MAXLINE];
    int length = custom_getline(line, MAXLINE);

    for (int i = length -1; i >= 0; --i) {
        printf("%c",line[i]);
    }
}