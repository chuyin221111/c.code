��������a��b����a*a+b*b>100,�����a*a+b*b�İٷ�λ���ϵ����֣�����ֱ�����a*a+b*b��
#include <stdio.h>
int main() {
	int a, b, c;
	printf("����������������\n");
	scanf("%d%d", &a, &b);
	c = (a * a + b * b);
	if (c > 100) {
		printf("%d", c % 100);
	} else {
		printf("%d", c);
	}
	return 0;
}