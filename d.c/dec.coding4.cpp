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
	printf("ÿ��ƽ������%f\n", d);
	printf("һ��%d��\n", t);
	printf("һ��%fǮ\n", f);
	return 0;
}