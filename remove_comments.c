// Function to remove all comments found in a C program
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_LINES 100
#define MAX_LENGTH 100

// Function that will read all lines from a file and store them in an array

int readLinesFromFile(const char *filename, char lines[MAX_LINES][MAX_LENGTH]) {
    FILE *file;
    char line[MAX_LENGTH];
    int line_count = 0;

    // Open the file in read mode
    file = fopen(filename, "r");

    // Check if file opened successfully
    if (file == NULL) {
        printf("Error opening file.\n");
        return -1; // Return -1 to indicate failure
    }

    // Read lines from the file and store them in the array
    while (fgets(line, sizeof(line), file) != NULL) {
        // Check if the array is full
        if (line_count >= MAX_LINES) {
            printf("Too many lines in the file.\n");
            break;
        }
        // Copy the line into the array
        strcpy(lines[line_count], line);
        line_count++;
    }

    // Close the file
    fclose(file);

    return line_count; // Return the number of lines read
}

void removeComments(char lines[MAX_LINES][MAX_LENGTH], int line_count) {
    for (int i = 0; i < line_count; i++) {
        char *comment_pos = strstr(lines[i], "//"); // Find the position of //
        if (comment_pos != NULL) {
            *comment_pos = '\0\n'; // Replace the first / with '\0' to truncate the string
        }
    }
}

int main() {
    char lines[MAX_LINES][MAX_LENGTH];
    int line_count;

    // Call the function to read lines from the file
    line_count = readLinesFromFile("/Users/calebsimmons/software-development/omscs/Textbooks/The C Programming Language/Hello_World.c", lines);

    // Check if reading was successful
    if (line_count >= 0) {
        
        //Remove comments from the array
        removeComments(lines,line_count);

        printf("Modified Program: \n");
        
        for (int i = 0; i < line_count; i++) {
            printf("%s",lines[i]);
        }
    }

    return 0;
}
