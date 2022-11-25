#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define N 20
#define T (time-8)/2
int sum[6]={0};
int computer[6][20]={{1,1,1,1,1,1,0,0,0,0,0,0,1,1,1,1,1,1,1,1},
{1,1,1,1,1,1,0,0,0,0,0,0,0,0,1,1,1,1,1,1},
{1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1},
{1,1,1,1,1,1,0,0,0,0,0,0,1,1,1,0,0,1,1,1},
{1,1,1,1,1,1,0,0,0,0,0,0,1,1,1,1,1,1,1,0},
{1,1,1,1,1,1,0,0,0,0,0,0,1,1,1,1,1,1,1,1}};
void menu();   //�˵� 
void situation();  //ʱ���ѯ 
void book();   ///Ԥ���ջ�λ
void cancel();  //ȡ��Ԥ��
void searchwaiting();  //��ѯ�ȴ���Ϣ
void detail(int time);
void prione(int i);
struct waitlist
{
	char number[3];
	char telephonenumber[11];	
}wait [N];
void printone(int i);
int main()
{
	menu();
}
void menu()
{
	int n,w;
	do
	{
		printf("***********����Ԥ��ϵͳ**************\n");
		printf("*************�˵�**************\n");
		printf("***********1.��ѯĳʱ��˻�λ״̬**************\n");
		printf("***********2.Ԥ���ջ�λ**************\n");
		printf("***********3.ȡ��Ԥ��**************\n");
		printf("***********4.��ѯ�ȴ���Ϣ**************\n");
	    printf("***********5.�˳�**************\n");
	    printf("ѡ��˵��ţ�1-5����\n");
		scanf("%d",&n);
		if(n<1||n>5)
		{
			w=1;getchar();
		 } 
		 else
		 {
		 	w=0;
		 }
	}while(w==1); 
	switch(n)
	{
		case 1:situation();break;
		case 2:book();break;
		case 3:cancel();break;
		case 4:searchwaiting();break;
		case 5:exit(0);break;
	}
	getchar();
}
void situation()
{
	int time;
	printf("���ڣ�8-20����Χ�ڵ�ʱ�䣺");
	scanf("%d",&time);
	if(time<8||time>20)
	{
		printf("ʱ���������!\n");
		printf("�����ڣ�8-20����Χ�ڵ�ʱ�䣺");
		scanf("%d",&time); 
	 } 
	 detail(time);  //��������  ʵ�ֲ���ÿ��ʱ��οջ�λ�����Ϳջ�λ�� 
	 menu;
}
void book()
{    FILE *fp;
	int time,i=0,x,y;
	char c;
	printf("�ڣ�8-20��ʱ�䷶Χ����������ҪԤ����ʱ�䣺");
	scanf("%d",&time);
	if(time<8||time>20)
	{
		printf("ʱ���������\n");
		printf("�ڣ�8-20��ʱ�䷶Χ����������ҪԤ����ʱ�䣺"); 
	 }
	 detail(time);
	 if(sum[T]>0)
	 {
	   if((fp=fopen("waitlist.txt","a"))==NULL)
        {
	    	printf("�������\n");
	    	exit (0);
	    }
	    printf("��������Ԥ���ĸ���λ�������λ�ţ����µ绰�ţ���\n");
	   scanf("%s %s",wait[i].number,wait[i].telephonenumber);
	   for(i=0;i<1;i++)
	   fwrite(&wait[i],sizeof(struct waitlist),1,fp);
	   fclose(fp);
	   printf("�ٴ���������Ҫ��ʱ�䣺\n");
	   scanf("%d",&x);
	   sum[T]--;
	   computer[T][x]=1;
	   printf("Ԥ���ɹ�\n");
	   getchar();
	   menu;    
	}
	else
	{
		printf("���������ʱ�����δԤ���ĵ��ԣ�\n");
		for(i=T+1;i<6;i++)
	    {
	    	time=9+2*i;
			detail(time);
			if(sum[T]>0)
			printf("����Ŀ���ʱ����%d,%d\n",2*i+8,2*i+10);break; 
		}
		printf("����ҪԤ���𣿣�y/n");
		scanf("%s",&c);
		getchar();
		if(c=='y'||c=='Y')
		{
			if((fp=fopen("waitlist.txt","r"))==NULL)
			{
				printf("�������\n");
	    	    exit (0);	
			}
			else
			{
				printf("waitlist:number telephone\n");
				for(i=0;!feof(fp);i++)
				{
					fscanf(fp,"%s %s",&wait[i].number,&wait[i].telephonenumber);
				}
				fclose(fp);
			}
			for(i=0;i<10;i++)
			{
				prione(i);
			}
			printf("����������Ԥ���Ļ��Ų����������ϵ��ʽ����\n");
			if((fp=fopen("waitlist.txt","a"))==NULL)
			{
			 	printf("�������\n");
	    	    exit (0);		
			}
			scanf("%s %s",&wait[i].number,&wait[i].telephonenumber);
		    for(i=0;i<1;i++)
	        fwrite(&wait[i],sizeof(struct waitlist),1,fp);
	        fclose(fp);
	        printf("�ٴ�������Ե���ţ�\n");
	        scanf("%d",&y);
	        sum[T]--;
	        computer[T][y]=1;
	        printf("���ˣ���ȴ����ǵĵ绰��\n");
	        menu ();
		}
	else menu();
	 } 
}
void cancel()  //Ԥ��ȡ�� 
{
	int time,number;
	printf("�ڣ�8��20��ʱ�䷶Χ���������Ѿ�Ԥ����ʱ�䣺");
	scanf("%d",&time);
	if(time<8||time>20)
	{
		printf("����ʱ�����\n");
		printf("�ڣ�8-20��ʱ�䷶Χ���������Ѿ�Ԥ����ʱ�䣺");
		scanf("%d",&number);
	}
		detail(time);
		sum[T]++;
		computer[T][number]=0;  //Ԥ��֮���Ϊ0 
		printf("ȡ���ɹ���\n");
		getchar();
		menu(); 
} 

void searchwaiting()   //�鿴�ȴ���Ϣ 
{
	int time,i;
    FILE *fp;
	printf("�ڣ�8-20��ʱ�䷶Χ��������Ҫ������ʱ�䣺");
	scanf("%d",&time);
	if(time<8||time>20)
	{
		printf("ʱ���������\n");
		printf("�ڣ�8-20��ʱ�䷶Χ��������Ҫ������ʱ�䣺"); 
		scanf("%d",&time); 
	 }
	 else
			{
				printf("waitlist:number telephone\n");
				for(i=0;!feof(fp);i++)
				{
					fscanf(fp,"%s %s",&wait[i].number,&wait[i].telephonenumber);
				}
				fclose(fp);
			}
			for(i=0;i<10;i++)
			{
				prione(i);
			}
			menu();
}
void detail(int time)  //����ÿ��ʱ��οջ�λ�����Ϳջ�λ�� 
{
	int i,j=0,k,s=0;
	int v[30];
	for(i=0;i<20;i++)
	{
		if(computer[T][i]==0)
		{
			s++;
			v[j++]=i;
		}
	}
	sum[T]=s;
	printf("Ŀǰ���õĵ��ԣ�%d\n",sum[T]);
	for(k=0;k<j;k++)
	{
		printf("���õĵ����ǣ�%d\n",v[k]);
	}
}
void prione(int i)  //ʵ����ע�ȴ��б���Ļ 
{
	printf("   %s %s  \n",wait[i].number,wait[i].telephonenumber);
}

	
  
