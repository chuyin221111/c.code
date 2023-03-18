输入整数a和b，若a*a+b*b>100,则输出a*a+b*b的百分位以上的数字，否则直接输出a*a+b*b。
#include <stdio.h>
int main() {
	int a, b, c;
	printf("请输入两个整数：\n");
	scanf("%d%d", &a, &b);
	c = (a * a + b * b);
	if (c > 100) {
		printf("%d", c % 100);
	} else {
		printf("%d", c);
	}
	return 0;
}