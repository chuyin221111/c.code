#include <stdio.h>

int main() {
	int s, a, t = 0;
	float f, d;
	s = a = 2;
	f = 0.0;
	for (s = 2; s <= 100; s = 2 * s) {
		f = f + 0.8 * s;
		t++;
	}

	d = f / t;
	printf("每天平均花费%f\n", d);
	printf("一共%d天\n", t);
	printf("一共%f钱\n", f);
	return 0;
}