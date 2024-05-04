#include <stdio.h>

/* Print a F to C table in increments of 20 deg F */

int main() {
	float cels, fahr;
	int start = 0;
	int end = 200;
	int increment = 20;

	/*Print Heading*/
	printf("FAHRENHEIT TO CELSIUS TABLE\n");

	fahr = start;
	while (fahr <= end) {
		cels = ((5.0/9.0) * (fahr - 32.0));
		printf("%3.0f\t%6.1f\n", fahr, cels);
		fahr = fahr + increment;
	}

}