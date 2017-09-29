#include <stdio.h>

/* Count blanks tabs and newlines in the input */
int main() {
	int c, blanks, tabs, newLines;

	blanks = 0;
	tabs = 0;
	newLines = 0;
	while ((c = getchar()) != EOF) {
		switch(c) {
			case ' ':
				blanks++;
				break;
			case '\t':
				tabs++;
				break;
			case '\n':
				newLines ++;
				break;
		}
	}
	putchar('\n');
	printf("%9s: %4d\n", "Blanks", blanks);
	printf("%9s: %4d\n", "Tabs", tabs);
	printf("%9s: %4d\n", "New Lines", newLines);
}
