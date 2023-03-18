#include <stdio.h>

int main() {
	int i;
	for (i = 1; i < 100; i++)
		if (i * i % 10 == i || i * i % 100 == i)
			printf("%3d", i);
	return 0;
}