#include <stdio.h>

/* Print a F to C table in increments of 20 deg F */
// Function for a F to C table 

void tempConversion(int temp, char unit) {
	int result = 1;

	if (unit == 'F' || unit == 'f') {
		result = (5.0/9.0) * (temp - 32.0);
		printf("%d fahr is %d cels\n",temp,result);
	}

	else if (unit == 'C' || unit == 'c') {
		result = (temp / (5.0/9.0)) + 32.0;
		printf("%d cels is %d fahr\n",temp,result);

	}
	
	else {
		printf("Not recognized unit");
	}

	}



int main() {
	int temp = 0;
	char unit = 'C';

	tempConversion(temp, unit);

	return 0;

}