#include <stdio.h>

int main() {
	FILE *fp;
	fp = fopen("abc", "r");
	if (fp == NULL)
		printf("\a���ļ�ʧ�ܡ�\n");
	else
		fclose(fp);
	return 0;
}