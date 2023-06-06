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
	char number[ M_NUMBER];      //��ѱ��
	char sit[M_SIT];             // ���뻹��֧��
	char name[M_NAME];           //������
	char reson[M_RESON];         //ԭ��
	char money[M_MONEY ];        //���
	int tatol;                   //���
	char sum[M_MONEY ];          //����
	char note[M_NOTE];          //��ע
	char time[M_TIME];          //ʱ��
};

struct  feeInfo {              //����һ���ṹ��
	struct classfee cfe[M];      //���һ�������Ϣ
	int size;                   //��¼���ϵͳ�ж����������Ϣ
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
void sum1();//���ڼ������


void InitfeeInfo(struct feeInfo *ps) {
	memset (ps->cfe, 0, sizeof(ps->cfe));   //memset �����������ֽڶ��ڴ����г�ʼ��
	ps->size = 0;  //��¼��ѹ���ϵͳ��ֻ��0����Ϣ
}

void menu() {
	printf("           �����֧����ϵͳ          \n");
	printf("************����ѡ��ҳ��*************\n");
	printf("*         1.¼������Ϣ            *\n");
	printf("*         2.������а����Ϣ        *\n");
	printf("*         3.��ѯ�����Ϣ            *\n");
	printf("*         4.�޸İ����Ϣ            *\n");
	printf("*         5.ɾ����Ѱ����Ϣ        *\n");
	printf("          6.�˳�ϵͳ                 \n");
	printf("*************************************\n");
}

//���˵�
int main() {
	int chose = 0;
	int z;
	struct feeInfo con;  //con�ǰ��ϵͳ�����������1000��Ԫ�ص�����size
	InitfeeInfo(&con);
	do {
		menu();
		printf("����������Ҫ��������ţ�\n");
		scanf("%d", &chose);
		switch (chose) {
			case 1:
				Input (&con);       //¼������Ϣ
				break;
			case 2:
				Scan(&con);         //��������Ϣ
				break;
			case 3:
				Inquire(&con);      //��ѯ�����Ϣ
				break;
			case 4:
				Alter(&con);        //�޸İ����Ϣ
				break;
			case 5:
				Delete(&con);        //ɾ�������Ϣ
				break;
			case 6:
				printf("�˳�ϵͳ\n");
				break;
			default:
				printf("ѡ�����\n");
				break;


		}
	} while (chose);
	return 0;
}

//¼������Ϣ
void Input(struct feeInfo *ps) {
	int z;
	if (ps->size == M) {
		printf("�洢��Ϣ�������޷�����\n");

	} else {
		printf("����������֧��ţ�\n");
		scanf("%s", ps->cfe[ps->size].number);
		printf("��������뻹��֧����\n");
		scanf("%s",  ps->cfe[ps->size].sit);
		printf("�����뾭���ˣ�\n");
		scanf("%s", ps->cfe[ps->size].name);
		printf("������ԭ��\n");
		scanf("%s",  ps->cfe[ps->size].reson);
		printf("�������\n");
		scanf("%s", ps->cfe[ps->size].money);
		printf("������༶������\n");
		scanf("%s",  ps->cfe[ps->size].sum);
		printf("�����뱸ע��\n");
		scanf("%s",  ps->cfe[ps->size].note);
		printf("������ʱ�䣺\n");
		scanf("%s",  ps->cfe[ps->size].time);
		sum1(ps, ps->size);
		ps->size++;
		printf("��ӳɹ�\n");

	}
}

//���ڼ������
void sum1(struct feeInfo *ps, int t) {

	if (strcmp(ps->cfe[t].sit, "֧��") == 0) {
		ps->cfe[t].tatol = (atoi(ps->cfe[t].money) * atoi(ps->cfe[t].sum) ) ;

	} else if (strcmp(ps->cfe[t].sit, "����") == 0) {
		ps->cfe[t].tatol = atoi(ps->cfe[t].money)  * atoi(
		                       ps->cfe[t].sum) * (1);
	}
	for (int i = t; i < M; i++) {
		if (strcmp(ps->cfe[t].sit, "֧��") == 0) {
			ps->cfe[t].tatol = ps->cfe[t - 1].tatol - (atoi(ps->cfe[t].money) * atoi(ps->cfe[t].sum) ) ;

		} else if (strcmp(ps->cfe[t].sit, "����") == 0) {
			ps->cfe[t].tatol	= 	ps->cfe[t + 1].tatol + atoi(ps->cfe[t].money)  * atoi(
			                            ps->cfe[t].sum) * (1);
		}
	}

}

//��������Ϣ
void Scan(struct feeInfo *ps) {
	if (ps->size == 0) {
		printf("û��¼����Ϣ\n");
	} else {
		int i = 0;
		printf("%-5s\t%-3s\t%-7s\t%-7s\t%-5s\t%-10s%-2s\t\t%-6s\t\t%-5s\n", "��ѱ��", "���뻹��֧��", "������", "ԭ��",
		       "��ÿλͬѧ)", "����", "��ע", "ʱ��", "���");
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

//���ڲ��Һ�ɾ�������Ϣ
int Find(struct feeInfo *ps, char number[ M_NUMBER] ) {
	int k = 0;
	for (k = 0; k < ps->size; k++) {
		if (0 == strcmp(ps->cfe[k].number, number)) {
			return k;
		}
	}
	return -1;
}

//��ѯ�����Ϣ
void Inquire( struct feeInfo *ps) {
	int a;
	show3();
	printf("�����룺\n");
	scanf("%d", &a);
	if (a == 1) {
		char num[M_NUMBER];
		printf("������Ҫ���ҵİ�ѱ�ţ�");
		scanf("%s", num);
		int pos = Find(ps, num);
		if (pos == -1) {
			printf("Ҫ���ҵİ�ѱ�Ų����ڣ�\n");
		} else {
			printf("%-10s\t%-10s\t%-10s\t%-10s\t%-10s\t\t%-10s\t%-5s\t%-4s\t%-5s\n", "��ѱ��", "���뻹��֧��", "������", "ԭ��",
			       "��ÿλͬѧ)", "����", "��ע", "ʱ��", "���");
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
		printf("��������Ҫ��ѯ�����֣�\n");
		scanf("%s", name1);
		for (int i = 0; i < ps->size; i++) {
			if (0 == strcmp(ps->cfe[i].name, name1)) {
				if ( y == 0) {
					printf("%-10s\t%-10s\t%-10s\t%-10s\t%-10s\t\t%-10s%-2s\t\t%-6s\t\t%-5s\n", "��ѱ��", "���뻹��֧��", "������", "ԭ��",
					       "��ÿλͬѧ)", "����", "��ע", "ʱ��", "���");
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
			printf("Ҫ��ѯ�ľ����˲�����\n");
		}
	} else if (a == 3) {
		int j;
		int g = 0;
		char time1[M_TIME];
		char time2[M_TIME];
		printf("�����뿪ʼʱ��\n");
		scanf("%s", time1);
		printf("���������ʱ��\n");
		scanf("%s", time2);
		for (j = 0; j < ps->size; j++) {
			if (strcmp(ps->cfe[j].time, time1) == 0 || strcmp(ps->cfe[j].time, time2) == 0
			        || strcmp(ps->cfe[j].time, time1) > 0 && strcmp(ps->cfe[j].time, time2) < 0) {
				if (g == 0)
					printf("%-10s\t%-10s\t%-10s\t%-10s\t%-10s\t\t%-10s\t%-5s\t%-4s\t%10s\n", "��ѱ��", "���뻹��֧��", "������", "ԭ��",
					       "��ÿλͬѧ)", "����", "��ע", "ʱ��", "���");
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
			printf("��Ҫ���ҵ���Ϣ������\n");
	} else if (a == 4) {
		int w = 0;
		int f;
		char sit1[M_SIT];
		printf("�����������֧����\n");
		scanf("%s", sit1);
		for (f = 0; f < ps->size; f++) {
			if (0 == strcmp(ps->cfe[f].sit, sit1)) {
				if (w == 0) {
					printf("%-10s\t%-10s\t%-10s\t%-10s\t%-10s\t\t%-10s\t%-5s\t%-4s\t%-5s\n", "��ѱ��", "���뻹��֧��", "������", "ԭ��",
					       "��ÿλͬѧ)", "����", "��ע", "ʱ��", "���");
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
			printf("Ҫ��ѯ����Ϣ������\n");
		}
	}
}

void show3() {
	printf("************************\n");
	printf("*  ��ѡ���ѯ��ʽ     *\n");
	printf("*  1.�԰�ѱ�Ų�ѯ   *\n");
	printf("*  2.�Ծ����˲�ѯ     *\n");
	printf("*  3.��ʱ�䷶Χ       *\n");
	printf("*  4.�����뻹��֧��   *\n");
	printf("***********************\n");
}

//ɾ�������Ϣ
void Delete(struct feeInfo *ps) {
	char num[M_NUMBER];
	printf("������Ҫɾ���ı�ţ�");
	scanf("%s", num);
	int pos = Find(ps, num);

	if (pos == -1) {
		printf("Ҫɾ���ı�Ų�����\n");

	} else {
		int j = 0;
		for (j = pos; j <= ps->size - 1; j++) {
			ps->cfe[j] = ps->cfe[j + 1];
		}
		ps->size--;
		printf("ɾ���ɹ�\n");
	}

}


//�޸İ����Ϣ
void Alter(struct feeInfo *ps) {
	char num[M_NUMBER];
	printf("������Ҫ�޸ĵı�ţ�");
	scanf("%s", num);
	int pos = Find(ps, num);
	if (pos == -1) {
		printf("Ҫ�޸ĵ�����Ϣ������\n");

	} else {
		printf("%-10s\t%-10s\t%-10s\t%-10s\t%-10s\t\t%-10s\t%-5s\t%-4s\t%-5s\n", "��ѱ��", "���뻹��֧��", "������", "ԭ��",
		       "��ÿλͬѧ)", "����", "��ע", "ʱ��", "���");
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
					printf("�������µİ�ѱ��:");
					scanf("%s", ps->cfe[pos].number);
					show2(ps, pos);
					break;
				case 2:
					printf("�������µ���֧���:");
					scanf("%s", ps->cfe[pos].sit);
					sum1(ps, pos);
					show2(ps, pos);
					break;
				case 3:
					printf("�������µľ�����:");
					scanf("%s", ps->cfe[pos].name);
					show2(ps, pos);
					break;
				case 4:
					printf("�������µ�ԭ��:");
					scanf("%s", ps->cfe[pos].reson);
					show2(ps, pos);
					break;
				case 5:
					printf("�������µĽ�ÿλͬѧ��:");
					scanf("%s", ps->cfe[pos].money);
					sum1(ps, pos);
					show2(ps, pos);
					break;
				case 6:
					printf("�������µ�����:");
					scanf("%s", ps->cfe[pos].sum);
					sum1(ps, pos);
					show2(ps, pos);
					break;
				case 7:
					printf("�������µı�ע:");
					scanf("%s", ps->cfe[pos].note);
					show2(ps, pos);
					break;
				case 8:
					printf("�������µ�ʱ��:");
					scanf("%s", ps->cfe[pos].time);
					show2(ps, pos);
					break;
				case 9:
					printf("�˳��޸�\n");
					break;
				default:
					printf("ѡ�����\n");
					break;

			}
		} while (j != 9);

	}
}

void show1() {
	printf("��ѡ��ĳһ������޸�\n");
	printf("1.��ѱ��\n");
	printf("2.���뻹��֧��\n");
	printf("3.������\n");
	printf("4.ԭ��\n");
	printf("5.���\n");
	printf("6.����\n");
	printf("7.��ע\n");
	printf("8.ʱ��\n");
	printf("9.�˳��޸�\n");
	printf("������ѡ��");
}

void show2(struct feeInfo *ps, int r) {
	char p ;
	printf("�Ƿ���������ֶ�(Y/N):");
	scanf("%s", &p);

	if (p == 'Y') {

	} else if (p == 'N')  {
		printf("�޸ĺ���Ϣ\n");
		printf("%-10s\t%-10s\t%-10s\t%-10s\t%-10s\t\t%-10s\t%-5s\t%-4s\n", "��ѱ��", "���뻹��֧��", "������", "ԭ��",
		       "��ÿλͬѧ)", "����", "��ע", "ʱ��", "���");
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