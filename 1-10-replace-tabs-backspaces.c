#include <stdio.h>

/* copy input to output replacing tab with \t, backspace with \b, & backslash by \\ */
int main() {
	int c;

	while ((c = getchar()) != EOF) {
		switch(c) {
			case '\t':
				printf("%s%s", "\\", "t");
				break;
			case '\b':
				printf("\\b");
				break;
			case '\\':
				printf("\\\\");
				break;
			default:
				putchar(c);
		}
	}
}
