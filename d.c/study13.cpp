#include <stdio.h> //y:Ӣ����ĸ��k:�ո�s:���֡�q:�����ַ�

int main() {
	char c;
	int y = 0, s = 0, k = 0, q = 0;
	printf("������һ���ַ���\n");
	while ((c = getchar()) != '\n') {
		if (c >= 'a' && c <= 'z' || c >= 'A' && c <= 'Z') {
			y++;
		} else if (c >= '0' && c <= '9') {
			s++;
		} else if (c == ' ') {
			k++;
		} else {
			q++;
		}
	}
	printf("%d\n%d\n%d\n%d\n", y, s, k, q);
	return 0;

}