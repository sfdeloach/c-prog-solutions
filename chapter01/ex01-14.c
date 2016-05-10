/*
    Exercise 1-14

    Write a program to print a histogram of the frequencies of different
    characters in its input.
*/

#include <stdio.h>
#define SCREEN_WIDTH 70.0
#define SYMBOL '*'

int main(void) {
    int c, i, j, alphabet[26], other, ws, max;
    double scale = 0.0;

    // Initialization
    other = ws = max = 0;
    for (i = 0; i < (sizeof(alphabet)/sizeof(alphabet[0])); ++i) {
        alphabet[i] = 0;
    }

    while ((c = getchar()) != EOF) {
        if (c >= 'a' && c <= 'z') {
            ++alphabet[c - 'a'];
        }
        else if (c >= 'A' && c <= 'Z') {
            c = c + 32;
            ++alphabet[c - 'a'];
        }
        else if (c == '\t' || c == '\n' || c == ' ') {
        	++ws;
        }
        else {
        	++other;
        }
    }
	
	// Find the max total and scale
	for (i = 0; i < (sizeof(alphabet)/sizeof(alphabet[0])); ++i) {
        if (max < alphabet[i]) {
        	max = alphabet[i];
        }
    }
    if (max < ws) {
    	max = ws;
    }
    if (max < other) {
    	max = other;
    }
    scale = (double) max / SCREEN_WIDTH;
                
    // Print results
    printf("Results are case independent:\n");
    for (i = 0; i < (sizeof(alphabet)/sizeof(alphabet[0])); ++i) {
        printf("  %c - %d\n", i + 'a', alphabet[i]);
    }
    printf("  white space - %d\n", ws);
    printf("  other - %d\n", other);
    printf("  max - %d\n", max);
    printf("  scale - %f\n\n", scale);

	// Print histogram
	printf("Histogram:\n");
    for (i = 0; i < (sizeof(alphabet)/sizeof(alphabet[0])); ++i) {
        printf("    %c - ", i + 'a');
        for (j = 0; j < (alphabet[i]/scale); ++j) {
        	putchar(SYMBOL);
        }
        printf("\n");
    }
    printf("   ws - ");
    for (i = 0; i < ws/scale; ++i) {
        putchar(SYMBOL);
    }
    printf("\n");
    printf("other - ");
    for (i = 0; i < other/scale; ++i) {
        putchar(SYMBOL);
    }
    printf("\n");
    
    return 0;
}
