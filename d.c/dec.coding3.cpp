#include <stdio.h>

int main( ) {
	int a;
	printf("请输入一个正整数：\n");
	scanf("%d", &a);
	if (a % 5 == 0 && a % 7 == 0) {
		printf("yes\n");
	} else {
		printf("no\n");
	}
	return 0;

}