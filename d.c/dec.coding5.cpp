#include <stdio.h>

int main() {
	int day = 0,
	    buy = 2;
	float sum = 0.0, ave;
	do {
		sum += 0.8 * buy;
		day++;
		buy *= 2;
	} while (buy <= 100);
	ave = sum / day;
	printf("%f\n", ave);
	printf("%d\n", day);
	return 0;
}