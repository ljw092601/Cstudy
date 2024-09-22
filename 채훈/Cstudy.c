#include <stdio.h>

int main() {

	int a, b;
	int c = 0;
	scanf("%d", &a);

	for (b = 0; b < a + 1; b++) {
		c += b;
	}
	printf("%d", c);

}