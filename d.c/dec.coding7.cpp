#include <stdio.h>

int main() {
	int x, y, t = 0;
	scanf("%d%d", &x, &y);
	do {
		x = x * x;
		t++;
	} while (t < y);
	if (x > 0 && x < 1000) {
		printf("最后三位数%d\n", x);
	} else if (x > 1000 && x < 10000) {
		printf("最后三位数：%d", x % 100);
	}
	return 0;
}