#include <stdio.h>

main() {

	printf(" Farh\t  Cels\n");

	float fahr, cels;
	int lower, upper, step;

	fahr = 0;
	cels = 0;

	lower = 0;
	upper = 300;
	step = 10;

	while (fahr <= upper){
		cels = (fahr - 32.0) * 5.0 / 9.0;
		printf("%3.0f F %6.2f C\n", fahr, cels);
		fahr += step;
	}
}
