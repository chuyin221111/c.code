#include <string.h>
#include <stdio.h>

struct classfee {
	char number;      //��ѱ��
	char sit;   // ���뻹��֧��
	char name;        //������
	char reson;       //ԭ��
	char money;           //���
	int tatol;
	int sum;            //����
	char note;        //��ע
	char time;        //ʱ��
} fei;

int main() {
	printf("����������֧��ţ�\n");
	scanf("%s", fei .number);
	printf("��������뻹��֧����\n");
	scanf("%s", fei .sit);
	printf("�����뾭���ˣ�\n");
	scanf("%s", fei.name);
	printf("������ԭ��\n");
	scanf("%s", fei.reson);
	printf("�������\n");
	scanf("%s", fei .money);
	printf("������༶������\n");
	scanf("%s", fei.sum);
	printf("�����뱸ע��\n");
	scanf("%s", fei.note);
	printf("������ʱ�䣺\n");
	scanf("%s", fei.time);
}