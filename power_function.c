// Function to raise n number to the x power (n^x)
// Not practical as it only handles positive integers

#include <stdio.h>

// First you must declare a function. 
// Common practice is to declare and define it in the beginning.

// Function Declaration and Definition
int power (int n, int x) {
    int result = 1;

    for (int i = 0; i < x; ++i) {
        result = result * n;
        }
    return result;

}

int main () {
    int num1 = 2;
    int num2 = 3;

    // Call the function
    int result = power(num1, num2);
    printf("%d to the power of %d = %d\n", num1, num2, result);

}