#include <stdio.h>

/* copy input to output and replace multiple blanks with single blank */
int main() {
  int c, prevC;

  while ((c = getchar()) != EOF) {
    if (c != ' ' && prevC != ' ') {
      prevC = c;
      putchar(c);
    } else if (c != ' ' && prevC == ' ') {
      putchar(prevC);
      putchar(c);
      prevC = c;
    } else {
      prevC = c;
    }
  }
}
