#include <stdio.h>

int main() {
	int a[30], j = 2, i, k, t = 0, b[5];
	float sum = 0.0;
	for (i = 0; i < 30; i++) {
		a[i] = j;
		j = j + 2;
	}
	for (i = 0, k = 0; i < 30; i++) {
		sum = sum + a[i];
		t++;
		if ((t % 5 ) == 0) {
			b[k] = sum / 5;
			sum = 0;
			k++;
			t = 0;
		}

	}
	for (k = 0; k < 6; k++) {
		printf("%4d\n", b[k]);
	}
	return 0;
}
/*#include <stdio.h>
#define size 30

int main() {
	float b[size / 5], sum;
	int a[size], i, j, k;
	for (k = 2, i = 2; i < size; i++) {
		a[i] = k;
		k += 2;

	}
	sum = 0.0;
	for (k = 0, i = 0; i < size; i++) {
		sum += a[i];
		j = i + 1;
		if ((i + 1) % 5 == 0) {
			b[k] = sum / 5;
			sum = 0;
			k++;
		}
	}
	printf("the result is :\n");
	for (i = 0; i < size / 5; i++) {
		printf("%5.2f", b[i]);
	}
	return 0;
}*/