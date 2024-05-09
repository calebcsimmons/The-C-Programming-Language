// External Variables and Scope

#include <stdio.h>
#include <math.h>

#define SIDE1 5

double calculate_hypotenuse(double a, double b) {
    double hypotenuse = sqrt(a*a + b*b);
    return hypotenuse;
}

int main () {
    int Side2 = 4;
    
    double result = calculate_hypotenuse(SIDE1, Side2);
    printf("%f",result);

    
}