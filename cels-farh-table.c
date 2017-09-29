#include <stdio.h>
/* conversion table of celsius to fahrenheit */
main() {
	float fahr, celsius;
	int lower, upper, step;

	printf("%7s\t%10s\n", "celsius", "fahrenheit");
	lower = 0;
	upper = 300;
	step = 20;
	celsius = lower;
	while (celsius <= upper) {
		fahr = celsius * 1.8 + 32;
		printf("%7.0f\t%10.0f\n", celsius, fahr);
		celsius = celsius + step;
	}
}
