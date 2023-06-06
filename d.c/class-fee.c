#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define M  1000

#define M_NUMBER 10
#define M_SIT    20
#define M_NAME   20
#define M_RESON  20
#define M_NOTE   15
#define M_TIME   13
#define M_MONEY  6
#define M_SUM    6
#define M_ALL  30


struct classfee {
	char number[ M_NUMBER];      //班费编号
	char sit[M_SIT];             // 收入还是支出
	char name[M_NAME];           //经办人
	char reson[M_RESON];         //原因
	char money[M_MONEY ];        //金额
	int tatol;                   //余额
	char sum[M_MONEY ];          //人数
	char note[M_NOTE];          //备注
	char time[M_TIME];          //时间
};

struct  feeInfo {              //定义一个结构体
	struct classfee cfe[M];      //存放一条班费信息
	int size;                   //记录班费系统有多少条班费信息
};

void Input(struct feeInfo *ps);
void Scan(struct feeInfo *ps);
void Inquire(struct feeInfo *ps);
void Alter(struct feeInfo *ps);
void Delete(struct feeInfo *ps);
int Outlook();
int atoi();
void findnum(struct feeInfo *ps);
void show1();
void show2();
void show3();
void sum1();//用于计算余额


void InitfeeInfo(struct feeInfo *ps) {
	memset (ps->cfe, 0, sizeof(ps->cfe));   //memset 函数：按照字节对内存块进行初始化
	ps->size = 0;  //记录班费管理系统现只有0条信息
}

void menu() {
	printf("           班费收支管理系统          \n");
	printf("************功能选择页面*************\n");
	printf("*         1.录入班费信息            *\n");
	printf("*         2.浏览所有班费信息        *\n");
	printf("*         3.查询班费信息            *\n");
	printf("*         4.修改班费信息            *\n");
	printf("*         5.删除班费班费信息        *\n");
	printf("          6.退出系统                 \n");
	printf("*************************************\n");
}

//主菜单
int main() {
	int chose = 0;
	int z;
	struct feeInfo con;  //con是班费系统，里面包含：1000给元素的数和size
	InitfeeInfo(&con);
	do {
		menu();
		printf("请输入你所要操作的序号：\n");
		scanf("%d", &chose);
		switch (chose) {
			case 1:
				Input (&con);       //录入班费信息
				break;
			case 2:
				Scan(&con);         //浏览班费信息
				break;
			case 3:
				Inquire(&con);      //查询班费信息
				break;
			case 4:
				Alter(&con);        //修改班费信息
				break;
			case 5:
				Delete(&con);        //删除班费信息
				break;
			case 6:
				printf("退出系统\n");
				break;
			default:
				printf("选择错误\n");
				break;


		}
	} while (chose);
	return 0;
}

//录入班费信息
void Input(struct feeInfo *ps) {
	int z;
	if (ps->size == M) {
		printf("存储信息已满，无法增加\n");

	} else {
		printf("请输入班费收支编号：\n");
		scanf("%s", ps->cfe[ps->size].number);
		printf("请输出收入还是支出：\n");
		scanf("%s",  ps->cfe[ps->size].sit);
		printf("请输入经办人：\n");
		scanf("%s", ps->cfe[ps->size].name);
		printf("请输入原因：\n");
		scanf("%s",  ps->cfe[ps->size].reson);
		printf("请输入金额：\n");
		scanf("%s", ps->cfe[ps->size].money);
		printf("请输入班级人数：\n");
		scanf("%s",  ps->cfe[ps->size].sum);
		printf("请输入备注：\n");
		scanf("%s",  ps->cfe[ps->size].note);
		printf("请输入时间：\n");
		scanf("%s",  ps->cfe[ps->size].time);
		sum1(ps, ps->size);
		ps->size++;
		printf("添加成功\n");

	}
}

//用于计算余额
void sum1(struct feeInfo *ps, int t) {

	if (strcmp(ps->cfe[t].sit, "支出") == 0) {
		ps->cfe[t].tatol = (atoi(ps->cfe[t].money) * atoi(ps->cfe[t].sum) ) ;

	} else if (strcmp(ps->cfe[t].sit, "收入") == 0) {
		ps->cfe[t].tatol = atoi(ps->cfe[t].money)  * atoi(
		                       ps->cfe[t].sum) * (1);
	}
	for (int i = t; i < M; i++) {
		if (strcmp(ps->cfe[t].sit, "支出") == 0) {
			ps->cfe[t].tatol = ps->cfe[t - 1].tatol - (atoi(ps->cfe[t].money) * atoi(ps->cfe[t].sum) ) ;

		} else if (strcmp(ps->cfe[t].sit, "收入") == 0) {
			ps->cfe[t].tatol	= 	ps->cfe[t + 1].tatol + atoi(ps->cfe[t].money)  * atoi(
			                            ps->cfe[t].sum) * (1);
		}
	}

}

//浏览班费信息
void Scan(struct feeInfo *ps) {
	if (ps->size == 0) {
		printf("没有录入信息\n");
	} else {
		int i = 0;
		printf("%-5s\t%-3s\t%-7s\t%-7s\t%-5s\t%-10s%-2s\t\t%-6s\t\t%-5s\n", "班费编号", "收入还是支出", "经办人", "原因",
		       "金额（每位同学)", "人数", "备注", "时间", "余额");
		for (i = 0; i < ps->size; i++) {
			printf("%-5s\t\t%-16s%-6s\t%-6s\t%-s\t%-5s%-13s\t%-17s%-d\n",
			       ps->cfe[i].number,
			       ps->cfe[i].sit,
			       ps->cfe[i].name,
			       ps->cfe[i].reson,
			       ps->cfe[i].money,
			       ps->cfe[i].sum,
			       ps->cfe[i].note,
			       ps->cfe[i].time,
			       ps->cfe[i].tatol);

		}

	}
}

//用于查找和删除班费信息
int Find(struct feeInfo *ps, char number[ M_NUMBER] ) {
	int k = 0;
	for (k = 0; k < ps->size; k++) {
		if (0 == strcmp(ps->cfe[k].number, number)) {
			return k;
		}
	}
	return -1;
}

//查询班费信息
void Inquire( struct feeInfo *ps) {
	int a;
	show3();
	printf("请输入：\n");
	scanf("%d", &a);
	if (a == 1) {
		char num[M_NUMBER];
		printf("请输入要查找的班费编号：");
		scanf("%s", num);
		int pos = Find(ps, num);
		if (pos == -1) {
			printf("要查找的班费编号不存在！\n");
		} else {
			printf("%-10s\t%-10s\t%-10s\t%-10s\t%-10s\t\t%-10s\t%-5s\t%-4s\t%-5s\n", "班费编号", "收入还是支出", "经办人", "原因",
			       "金额（每位同学)", "人数", "备注", "时间", "余额");
			printf("%-10s\t%-10s\t%-10s\t%-10s\t%-10s\t\t%-10s\t%-5s\t%-4s\t%-d\n",
			       ps->cfe[pos].number,
			       ps->cfe[pos].sit,
			       ps->cfe[pos].name,
			       ps->cfe[pos].reson,
			       ps->cfe[pos].money,
			       ps->cfe[pos].sum,
			       ps->cfe[pos].note,
			       ps->cfe[pos].time,
			       ps->cfe[pos].tatol);
		}
	} else if (a == 2) {
		char name1[M_NAME];
		int y = 0;
		printf("请输入你要查询的名字：\n");
		scanf("%s", name1);
		for (int i = 0; i < ps->size; i++) {
			if (0 == strcmp(ps->cfe[i].name, name1)) {
				if ( y == 0) {
					printf("%-10s\t%-10s\t%-10s\t%-10s\t%-10s\t\t%-10s%-2s\t\t%-6s\t\t%-5s\n", "班费编号", "收入还是支出", "经办人", "原因",
					       "金额（每位同学)", "人数", "备注", "时间", "余额");
				}
				y++;
				printf("%-10s\t%-10s\t%-10s\t%-10s\t%-10s\t\t%-5s\t%-13s\t%-17s%-d\n",
				       ps->cfe[i].number,
				       ps->cfe[i].sit,
				       ps->cfe[i].name,
				       ps->cfe[i].reson,
				       ps->cfe[i].money,
				       ps->cfe[i].sum,
				       ps->cfe[i].note,
				       ps->cfe[i].time,
				       ps->cfe[i].tatol);

			}
		}
		if (y == 0) {
			printf("要查询的经办人不存在\n");
		}
	} else if (a == 3) {
		int j;
		int g = 0;
		char time1[M_TIME];
		char time2[M_TIME];
		printf("请输入开始时间\n");
		scanf("%s", time1);
		printf("请输入结束时间\n");
		scanf("%s", time2);
		for (j = 0; j < ps->size; j++) {
			if (strcmp(ps->cfe[j].time, time1) == 0 || strcmp(ps->cfe[j].time, time2) == 0
			        || strcmp(ps->cfe[j].time, time1) > 0 && strcmp(ps->cfe[j].time, time2) < 0) {
				if (g == 0)
					printf("%-10s\t%-10s\t%-10s\t%-10s\t%-10s\t\t%-10s\t%-5s\t%-4s\t%10s\n", "班费编号", "收入还是支出", "经办人", "原因",
					       "金额（每位同学)", "人数", "备注", "时间", "余额");
				g++;
				printf("%-10s\t%-10s\t%-10s\t%-10s\t%-10s\t\t%-10s\t%-5s\t%-4s\t%-d\n",
				       ps->cfe[j].number,
				       ps->cfe[j].sit,
				       ps->cfe[j].name,
				       ps->cfe[j].reson,
				       ps->cfe[j].money,
				       ps->cfe[j].sum,
				       ps->cfe[j].note,
				       ps->cfe[j].time,
				       ps->cfe[j].tatol);
			}
		}
		if (g == 0)
			printf("你要查找的信息不存在\n");
	} else if (a == 4) {
		int w = 0;
		int f;
		char sit1[M_SIT];
		printf("请输入收入或支出：\n");
		scanf("%s", sit1);
		for (f = 0; f < ps->size; f++) {
			if (0 == strcmp(ps->cfe[f].sit, sit1)) {
				if (w == 0) {
					printf("%-10s\t%-10s\t%-10s\t%-10s\t%-10s\t\t%-10s\t%-5s\t%-4s\t%-5s\n", "班费编号", "收入还是支出", "经办人", "原因",
					       "金额（每位同学)", "人数", "备注", "时间", "余额");
				}
				w++;
				printf("%-10s\t%-10s\t%-10s\t%-10s\t%-10s\t\t%-10s\t%-5s\t%-4s\t%-d\n",
				       ps->cfe[f].number,
				       ps->cfe[f].sit,
				       ps->cfe[f].name,
				       ps->cfe[f].reson,
				       ps->cfe[f].money,
				       ps->cfe[f].sum,
				       ps->cfe[f].note,
				       ps->cfe[f].time,
				       ps->cfe[f].tatol);

			}
		}
		if (w == 0) {
			printf("要查询的信息不存在\n");
		}
	}
}

void show3() {
	printf("************************\n");
	printf("*  请选择查询方式     *\n");
	printf("*  1.以班费编号查询   *\n");
	printf("*  2.以经办人查询     *\n");
	printf("*  3.以时间范围       *\n");
	printf("*  4.以收入还是支出   *\n");
	printf("***********************\n");
}

//删除班费信息
void Delete(struct feeInfo *ps) {
	char num[M_NUMBER];
	printf("请输入要删除的编号：");
	scanf("%s", num);
	int pos = Find(ps, num);

	if (pos == -1) {
		printf("要删除的编号不存在\n");

	} else {
		int j = 0;
		for (j = pos; j <= ps->size - 1; j++) {
			ps->cfe[j] = ps->cfe[j + 1];
		}
		ps->size--;
		printf("删除成功\n");
	}

}


//修改班费信息
void Alter(struct feeInfo *ps) {
	char num[M_NUMBER];
	printf("请输入要修改的编号：");
	scanf("%s", num);
	int pos = Find(ps, num);
	if (pos == -1) {
		printf("要修改的人信息不存在\n");

	} else {
		printf("%-10s\t%-10s\t%-10s\t%-10s\t%-10s\t\t%-10s\t%-5s\t%-4s\t%-5s\n", "班费编号", "收入还是支出", "经办人", "原因",
		       "金额（每位同学)", "人数", "备注", "时间", "余额");
		printf("%-10s\t%-10s\t%-10s\t%-10s\t%-10s\t\t%-10s\t%-5s\t%-4s\t%-d\n",
		       ps->cfe[pos].number,
		       ps->cfe[pos].sit,
		       ps->cfe[pos].name,
		       ps->cfe[pos].reson,
		       ps->cfe[pos].money,
		       ps->cfe[pos].sum,
		       ps->cfe[pos].note,
		       ps->cfe[pos].time,
		       ps->cfe[pos].tatol);
		int j;
		do {
			show1();
			scanf("%d", &j);
			switch (j) {
				case 1:
					printf("请输入新的班费编号:");
					scanf("%s", ps->cfe[pos].number);
					show2(ps, pos);
					break;
				case 2:
					printf("请输入新的收支情况:");
					scanf("%s", ps->cfe[pos].sit);
					sum1(ps, pos);
					show2(ps, pos);
					break;
				case 3:
					printf("请输入新的经办人:");
					scanf("%s", ps->cfe[pos].name);
					show2(ps, pos);
					break;
				case 4:
					printf("请输入新的原因:");
					scanf("%s", ps->cfe[pos].reson);
					show2(ps, pos);
					break;
				case 5:
					printf("请输入新的金额（每位同学）:");
					scanf("%s", ps->cfe[pos].money);
					sum1(ps, pos);
					show2(ps, pos);
					break;
				case 6:
					printf("请输入新的人数:");
					scanf("%s", ps->cfe[pos].sum);
					sum1(ps, pos);
					show2(ps, pos);
					break;
				case 7:
					printf("请输入新的备注:");
					scanf("%s", ps->cfe[pos].note);
					show2(ps, pos);
					break;
				case 8:
					printf("请输入新的时间:");
					scanf("%s", ps->cfe[pos].time);
					show2(ps, pos);
					break;
				case 9:
					printf("退出修改\n");
					break;
				default:
					printf("选择错误\n");
					break;

			}
		} while (j != 9);

	}
}

void show1() {
	printf("请选择某一项进行修改\n");
	printf("1.班费编号\n");
	printf("2.收入还是支出\n");
	printf("3.经办人\n");
	printf("4.原因\n");
	printf("5.金额\n");
	printf("6.人数\n");
	printf("7.备注\n");
	printf("8.时间\n");
	printf("9.退出修改\n");
	printf("请输入选择：");
}

void show2(struct feeInfo *ps, int r) {
	char p ;
	printf("是否更新其它字段(Y/N):");
	scanf("%s", &p);

	if (p == 'Y') {

	} else if (p == 'N')  {
		printf("修改后信息\n");
		printf("%-10s\t%-10s\t%-10s\t%-10s\t%-10s\t\t%-10s\t%-5s\t%-4s\n", "班费编号", "收入还是支出", "经办人", "原因",
		       "金额（每位同学)", "人数", "备注", "时间", "余额");
		printf("%-10s\t%-10s\t%-10s\t%-10s\t%-10s\t\t%-10s\t%-5s\t%-4s\t%-5d\n",
		       ps->cfe[r].number,
		       ps->cfe[r].sit,
		       ps->cfe[r].name,
		       ps->cfe[r].reson,
		       ps->cfe[r].money,
		       ps->cfe[r].sum,
		       ps->cfe[r].note,
		       ps->cfe[r].time,
		       ps->cfe[r].tatol);
	}
}