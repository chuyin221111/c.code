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
void menu();   //菜单 
void situation();  //时间查询 
void book();   ///预订空机位
void cancel();  //取消预订
void searchwaiting();  //查询等待消息
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
		printf("***********机房预订系统**************\n");
		printf("*************菜单**************\n");
		printf("***********1.查询某时间端机位状态**************\n");
		printf("***********2.预订空机位**************\n");
		printf("***********3.取消预订**************\n");
		printf("***********4.查询等待消息**************\n");
	    printf("***********5.退出**************\n");
	    printf("选择菜单号（1-5）：\n");
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
	printf("输在（8-20）范围内的时间：");
	scanf("%d",&time);
	if(time<8||time>20)
	{
		printf("时间输入错误!\n");
		printf("输入在（8-20）范围内的时间：");
		scanf("%d",&time); 
	 } 
	 detail(time);  //函数调用  实现查找每个时间段空机位总数和空机位号 
	 menu;
}
void book()
{    FILE *fp;
	int time,i=0,x,y;
	char c;
	printf("在（8-20）时间范围内输入你想要预定的时间：");
	scanf("%d",&time);
	if(time<8||time>20)
	{
		printf("时间输入错误！\n");
		printf("在（8-20）时间范围内输入你想要预定的时间："); 
	 }
	 detail(time);
	 if(sum[T]>0)
	 {
	   if((fp=fopen("waitlist.txt","a"))==NULL)
        {
	    	printf("程序错误！\n");
	    	exit (0);
	    }
	    printf("请问你想预留哪个机位，输入机位号，留下电话号！：\n");
	   scanf("%s %s",wait[i].number,wait[i].telephonenumber);
	   for(i=0;i<1;i++)
	   fwrite(&wait[i],sizeof(struct waitlist),1,fp);
	   fclose(fp);
	   printf("再次输入你想要的时间：\n");
	   scanf("%d",&x);
	   sum[T]--;
	   computer[T][x]=1;
	   printf("预定成功\n");
	   getchar();
	   menu;    
	}
	else
	{
		printf("这是在这个时间段内未预定的电脑！\n");
		for(i=T+1;i<6;i++)
	    {
	    	time=9+2*i;
			detail(time);
			if(sum[T]>0)
			printf("最近的空闲时间是%d,%d\n",2*i+8,2*i+10);break; 
		}
		printf("你想要预定吗？：y/n");
		scanf("%s",&c);
		getchar();
		if(c=='y'||c=='Y')
		{
			if((fp=fopen("waitlist.txt","r"))==NULL)
			{
				printf("程序错误！\n");
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
			printf("请输入您想预定的机号并留下你的联系方式！：\n");
			if((fp=fopen("waitlist.txt","a"))==NULL)
			{
			 	printf("程序错误！\n");
	    	    exit (0);		
			}
			scanf("%s %s",&wait[i].number,&wait[i].telephonenumber);
		    for(i=0;i<1;i++)
	        fwrite(&wait[i],sizeof(struct waitlist),1,fp);
	        fclose(fp);
	        printf("再次输入电脑的序号：\n");
	        scanf("%d",&y);
	        sum[T]--;
	        computer[T][y]=1;
	        printf("好了，请等待我们的电话！\n");
	        menu ();
		}
	else menu();
	 } 
}
void cancel()  //预订取消 
{
	int time,number;
	printf("在（8—20）时间范围内输入你已经预定的时间：");
	scanf("%d",&time);
	if(time<8||time>20)
	{
		printf("输入时间错误！\n");
		printf("在（8-20）时间范围内输入你已经预定的时间：");
		scanf("%d",&number);
	}
		detail(time);
		sum[T]++;
		computer[T][number]=0;  //预定之后变为0 
		printf("取消成功！\n");
		getchar();
		menu(); 
} 

void searchwaiting()   //查看等待信息 
{
	int time,i;
    FILE *fp;
	printf("在（8-20）时间范围内输入你要搜索的时间：");
	scanf("%d",&time);
	if(time<8||time>20)
	{
		printf("时间输入错误！\n");
		printf("在（8-20）时间范围内输入你要搜索的时间："); 
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
void detail(int time)  //查找每个时间段空机位总数和空机位号 
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
	printf("目前空置的电脑：%d\n",sum[T]);
	for(k=0;k<j;k++)
	{
		printf("空置的电脑是：%d\n",v[k]);
	}
}
void prione(int i)  //实现输注等待列表到屏幕 
{
	printf("   %s %s  \n",wait[i].number,wait[i].telephonenumber);
}

	
  
