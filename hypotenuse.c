// External Variables and Scope

#include <stdio.h>
#include "variables.h"
#include <math.h>

// Declare external(global) variables

double calculate_hypotenuse(double a, double b) {
    double hypotenuse = sqrt(a*a + b*b);
    return hypotenuse;
}

int main () {
    int side2 = 4;
    
    double result = calculate_hypotenuse(SIDE1, side2);
    printf("%f",result);
}