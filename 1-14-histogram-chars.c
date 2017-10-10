#include <stdio.h>

/* Histogram of each digit, white space, & other (separately) */
int main() {
	int c, i, j, graphMax;
	int nchar[128];

	for (i = 0; i < 128; ++i)
		nchar[i] = 0;

	while ((c = getchar()) != EOF)
		++nchar[c];

	// set max of graph to most used character
	for (i = 0; i < 128; i++) {
		if (graphMax < nchar[i]) {
			graphMax = nchar[i];
		}
	}

	while (graphMax % 10 != 0) {
		graphMax += 1;
	}

	// Print Graph
	putchar('\n');
	// Print top labels (same as bottom)
	for (i = 0; i < graphMax && i < 100; ++i) {
		if (i % 5 == 0) {
			printf("%4d|", i);
		}
	}
	// Print Left side labels
	putchar('\n');
	for (i = 0; i < 128; ++i) {
		switch (i) {
			case 0:
				printf("%4s|", "NUL");
				break;
			case 1:
				printf("%4s|", "SOH");
				break;
			case 2:
				printf("%4s|", "STX");
				break;
			case 3:
				printf("%4s|", "ETX");
				break;
			case 4:
				printf("%4s|", "EOT");
				break;
			case 5:
				printf("%4s|", "ENQ");
				break;
			case 6:
				printf("%4s|", "ACK");
				break;
			case 7:
				printf("%4s|", "BEL");
				break;
			case 8:
				printf("%4s|", "BS");
				break;
			case 9:
				printf("%4s|", "TAB");
				break;
			case 10:
				printf("%4s|", "LF");
				break;
			case 11:
				printf("%4s|", "VT");
				break;
			case 12:
				printf("%4s|", "FF");
				break;
			case 13:
				printf("%4s|", "CR");
				break;
			case 14:
				printf("%4s|", "SO");
				break;
			case 15:
				printf("%4s|", "SI");
				break;
			case 16:
				printf("%4s|", "DLE");
				break;
			case 17:
				printf("%4s|", "DC1");
				break;
			case 18:
				printf("%4s|", "DC2");
				break;
			case 19:
				printf("%4s|", "DC3");
				break;
			case 20:
				printf("%4s|", "DC4");
				break;
			case 21:
				printf("%4s|", "NAK");
				break;
			case 22:
				printf("%4s|", "SYN");
				break;
			case 23:
				printf("%4s|", "ETB");
				break;
			case 24:
				printf("%4s|", "CAN");
				break;
			case 25:
				printf("%4s|", "EM");
				break;
			case 26:
				printf("%4s|", "SUB");
				break;
			case 27:
				printf("%4s|", "ESC");
				break;
			case 28:
				printf("%4s|", "FS");
				break;
			case 29:
				printf("%4s|", "GS");
				break;
			case 30:
				printf("%4s|", "RS");
				break;
			case 31:
				printf("%4s|", "US");
				break;
			case 32:
				printf("%4s|", "\\w");
				break;
			case 127:
				printf("%4s|", "DEL");
				break;
			default:
				printf("%4c|", i);
				break;
		}

		for (j = 0; j < nchar[i]; ++j) {
			printf("-");
		}
		printf("\n");
	}

	// Print Bottom labels
	for (i = 0; i < graphMax && i < 100; ++i) {
		if (i % 5 == 0) {
			printf("%4d|", i);
		}
	}
	putchar('\n');
}
