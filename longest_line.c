// program that prints the longest line

// While (there is another line) 
//      if (its longer than previous line) 
//          save it 
//          save its length
//      print longest line

#include <stdio.h>
#define MAXLINE 1000        //maximum input line size

//Function to get current line
int getline(char line[], int maxline) {
    int c; // Declare a variable to store each character read
    int i; // Declare a variable for indexing the array

    // Loop through all characters on every line
    for (i = 0; i < (maxline - 1) && ((c = getchar()) != EOF) && c != '\n'; ++i) {
        line[i] = c;
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

void copy(char to[], char from[]) { //Function to copy line
    int i;
    i = 0;

    while ((to[i] = from[i]) != '\0') {
        ++i;
    }

}

// print longest input line

int main () {
    int len;                //current line length
    int max;                //max length seen so far
    char line[MAXLINE];     //Current input line
    char longest[MAXLINE];  //longest line saved here

    max = 0;

    while ((len = getline (line, MAXLINE)) > 0) {

        if (len > max) {
            max = len;
            copy(longest,line);
        }

    if (max > 0) {
        printf("%d",longest);
    }

    return 0;
    }
}