// Function to print all input lines that are longer than 80 characters

#include <stdio.h>
#include <string.h>
#define MAXLINE 1000
#define MAXLINES 100

// Function to get current line
int custom_getline(char line[], int maxline) {
    int c;                                      // Declare a variable to store each character read
    int i;                                      // Declare a variable for indexing the array

    // Loop through all characters on every line
    for (i = 0; i < (maxline - 1) && ((c = getchar()) != EOF) && c != '\n'; ++i) {
        line[i] = c;
    }

    if (c == EOF && i == 0) {
        return -1;
    }

    // If newline character is read, store it in the array and increment
    if (c == '\n') {
        line[i] = c;
        ++i;
    }
    
    // Append a null terminator to mark the end of the string of characters
    line[i] = '\0';

    // Return the number of characters read
    return i;
}

int main () {

    char line[MAXLINE];
    char lines[MAXLINES][MAXLINE];
    int line_count = 0;
    
    // Read lines and store those with more than 80 characters
    while (custom_getline(line, MAXLINE) > 0) {
        if (strlen(line) > 10 && line_count < MAXLINES) {
            strcpy(lines[line_count], line);
            line_count++;
        }
    }

    // Print stored lines
    printf("\n\nhere come your lines!:\n");
    for (int i = 0; i < line_count; ++i) {
        printf("%s", lines[i]);
    }

    return 0;
    
}