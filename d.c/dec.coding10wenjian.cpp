#include <stdio.h>

int main() {
	FILE *fp;
	fp = fopen("abc", "r");
	if (fp == NULL)
		printf("\a打开文件失败。\n");
	else
		fclose(fp);
	return 0;
}