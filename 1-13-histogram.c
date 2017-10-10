#include <stdio.h>

/* Histogram of each digit, white space, & other (separately) */
int main() {
	int c, i, j, nwhite, nother, graphMax;
	int ndigit[10];

	nwhite = nother = graphMax= 0;
	for (i = 0; i < 10; ++i)
		ndigit[i] = 0;

	while ((c = getchar()) != EOF)
		if (c >= '0' && c <= '9')
			++ndigit[c-'0'];
		else if (c == ' ' || c == '\n' || c == '\t')
			++nwhite;
		else
			++nother;

	// set max of graph to most used character/digit
	for (i = 0; i < 10; i++) {
		if (graphMax < ndigit[i]) {
			graphMax = ndigit[i];
		}
	}

	if (graphMax < nwhite)
		graphMax = nwhite;

	if (graphMax < nother)
		graphMax = nother;

	while (graphMax % 10 != 0) {
		graphMax += 1;
	}

	putchar('\n');
	// Print Graph
	for (i = graphMax; i > 0; --i) {
		// Print Left side labels
		if (i % 5 == 0) {
			printf("%3d|", i);
		} else {
			printf("   |");
		}

		// Print Digit bars
		for (j = 0; j < 10; j++) {
			if (ndigit[j] == i) {
				printf("|\u00af\u00af\u00af|");
			} else if (ndigit[j] > i){
				printf("|   |");
			} else {
				printf("     ");
			}
		}
		printf("\n");
	}

	// Print Bottom labels
	printf("  0");
	for (j = 0; j < 51; ++j)
		printf("\u00af");
	putchar('\n');
	printf("    ");
	for (j = 0; j < 10; ++j) {
		printf("  %d  ", j);
	}
	putchar('\n');
}
