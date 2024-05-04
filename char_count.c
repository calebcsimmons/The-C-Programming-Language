#include <stdio.h>
// Count characters from input

int main() {
    int nc;

    for (nc=0; getchar() != EOF; ++nc)
        ;
    printf("%.0f\n", nc);

}

// printf uses %f for both float and double.
// %.0f supresses printing of the decimal point and the fraction part
// for loop must have a body. Therefore ";" was used as a null statement