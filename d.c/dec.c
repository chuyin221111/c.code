#include <string.h>
#include <stdio.h>

struct classfee {
	char number;      //班费编号
	char sit;   // 收入还是支出
	char name;        //经办人
	char reson;       //原因
	char money;           //金额
	int tatol;
	int sum;            //人数
	char note;        //备注
	char time;        //时间
} fei;

int main() {
	printf("请输入班费收支编号：\n");
	scanf("%s", fei .number);
	printf("请输出收入还是支出：\n");
	scanf("%s", fei .sit);
	printf("请输入经办人：\n");
	scanf("%s", fei.name);
	printf("请输入原因：\n");
	scanf("%s", fei.reson);
	printf("请输入金额：\n");
	scanf("%s", fei .money);
	printf("请输入班级人数：\n");
	scanf("%s", fei.sum);
	printf("请输入备注：\n");
	scanf("%s", fei.note);
	printf("请输入时间：\n");
	scanf("%s", fei.time);
}