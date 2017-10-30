//write a program to copy its input to its output, replacing eachstring of one or more blanks by a single blank

#include <stdio.h>

int main() {
	int c;

	while ((c = getchar()) != EOF) {
		if (c == ' ') {
			while ((c = getchar()) == ' ') {
			} // until c is blank do nothing then print blank in place of all the missed ones
			putchar(' ');
		
			if (c == EOF) {
				break;
			}	
		}
	putchar(c);
	}
}
