//Program to count number of occurances of each digit, white space chars, and all other chars.

#include <stdio.h>

int main () {
    int c, i, nwhite, nother;
    int ndigit[10];

    nwhite = 0;
    nother = 0;

    // We must first initialize the array and set all values to 0. Then, once a number (0-9) is detected, it will add that value in the array by 1.
    for (i = 0; i < 10; ++i) {
        ndigit[i] = 0;
    }

    while ((c = getchar()) != EOF) {
        if (c >= '0' && c <= '9') {
            ++ndigit[c - '0']; // subtracting value by '0' is a common way to convert the value to its ASCII value
        }
        else if (c == ' ' || c == '\n' || c == '\t') {
            ++nwhite;
            }
        
        else {
            ++nother;
        }
    }

    printf("digits =");
    for (i = 0; i < 10; ++i) {
        printf(" %d", ndigit[i]);
    }
    printf(", white space = %d, other = %d\n", nwhite, nother);
    

}




