#include <stdio.h>

int main() {
	float c, s, t, l;
	s, t, l = 0;
	
	while ((c = getchar()) != EOF) {
		if (c == '\n')
			l++;
		if (c == '\t')
			t++;
		if (c == ' ')
			s++;
	}	
	printf("\nNew Lines: %.0f\nTabs: %.0f\nSpaces: %.0f\n", l, t, s);
}
