// A program that determines the ranges of char, short, int, and long variables, 
// both signed and unsigned, by printing the appropriate values from standard headers and by direct computation. 

#include <stdio.h>
#include <limits.h>
#include <float.h>

int main() {
    printf("Ranges of data types using standard headers:\n");
    printf("-------------------------------------------------\n");
    printf("char:          %d to %d\n", CHAR_MIN, CHAR_MAX);
    printf("signed char:   %d to %d\n", SCHAR_MIN, SCHAR_MAX);
    printf("unsigned char: 0 to %u\n", UCHAR_MAX);
    printf("short:         %d to %d\n", SHRT_MIN, SHRT_MAX);
    printf("int:           %d to %d\n", INT_MIN, INT_MAX);
    printf("unsigned int:  0 to %u\n", UINT_MAX);
    printf("long:          %ld to %ld\n", LONG_MIN, LONG_MAX);
    printf("unsigned long: 0 to %lu\n", ULONG_MAX);

    // Direct computation for determining ranges
    printf("\nRanges of data types by direct computation:\n");
    printf("-------------------------------------------------\n");
    printf("char:          %d to %d\n", -(char)((unsigned char) ~0 >> 1) - 1, (char)((unsigned char) ~0 >> 1));
    printf("signed char:   %d to %d\n", -(char)((unsigned char) ~0 >> 1) - 1, (char)((unsigned char) ~0 >> 1));
    printf("unsigned char: 0 to %u\n", (unsigned char)~0);
    printf("short:         %d to %d\n", -(short)((unsigned short) ~0 >> 1) - 1, (short)((unsigned short) ~0 >> 1));
    printf("int:           %d to %d\n", -(int)((unsigned int) ~0 >> 1) - 1, (int)((unsigned int) ~0 >> 1));
    printf("unsigned int:  0 to %u\n", (unsigned int)~0);
    printf("long:          %ld to %ld\n", -(long)((unsigned long) ~0 >> 1) - 1, (long)((unsigned long) ~0 >> 1));
    printf("unsigned long: 0 to %lu\n", (unsigned long)~0);

    return 0;
}
