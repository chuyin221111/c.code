#include <stdio.h> //y:Ó¢ÎÄ×ÖÄ¸¡¢k:¿Õ¸ñ¡¢s:Êý×Ö¡¢q:ÆäËû×Ö·û

int main() {
	char c;
	int y = 0, s = 0, k = 0, q = 0;
	printf("ÇëÊäÈëÒ»´®×Ö·û´®\n");
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