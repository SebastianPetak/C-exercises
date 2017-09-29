#include <stdio.h>

/* count characters in input; 1st version */
int main() {
	long nc;

	for (nc = 0; getchar() != EOF; nc++)
		;
	printf("%ld\n", nc);
}
