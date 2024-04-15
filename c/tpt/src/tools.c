#include "tools.h"
#include <stdio.h>

void count_occurrences(const char *text) {
	int ndigit[10] = {0};
	int nwhite = 0, nother = 0;

	for (int i = 0; text[i] != '\0'; i++) {
		char c = text[i];
		if (c >= '0' && c <= '9') {
			ndigit[c - '0']++;
		} else if (c == ' ' || c == '\n' || c == '\t') {
			nwhite++;
		} else {
			nother++;
		}
	}

	// print results
	printf("Occurrence digits: ");
	for (int i = 0; i < 10; i++) {
		printf("%d ", ndigit[i]);
	}
	printf("\nWhite spaces: %d\nOther characters: %d\n", nwhite, nother);
}
