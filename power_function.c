// Function to raise n number to the x power (n^x)
// Not practical as it only handles positive integers

#include <stdio.h>

// First you must declare a function. 
// Common practice is to declare and define it in the beginning.

// Function Declaration and Definition
int powerv1 (int base, int x) {
    int result = 1;

    for (int i = 0; i < x; ++i) {
        result = result * base;
        }
    return result;

}

// Since we are in C, we could have used 'x' instead of creating i
// in the for loop, --x instead of ++i
// This leads to having to use/create less variables.

int powerv2 (int base, int x) {
    int result = 1;

    for (result = 1; x > 0; --x) {
        result = result * base;
        }
    return result;

}

int main () {
    int num1 = 2;
    int num2 = 3;

    // Call the function
    int result = powerv2(num1, num2);
    printf("%d to the power of %d = %d\n", num1, num2, result);

}