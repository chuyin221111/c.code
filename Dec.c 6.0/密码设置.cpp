#include <stdio.h>
#define TOPLIMIT 5
int main()
{
	int psw=123456;
	int temppsw,newpsw,confirmedpsw;
	int i=TOPLIMIT;
	char operation;
	printf("——————密码修改功能——————");
	do
	{
		printf ("请输入原密码：");
		scanf("%d",&temppsw);
		if(psw!=temppsw)
		{
			i--;
			if(i<=0)
			{
				printf("修改密码次数达到上限！");
				break; 
			}
			printf("原密码输入有误，还有%d次输入密码的机会。\n",i);
			printf("是否再次尝试输入原密码？(Y|N)");
			setbuf(stdin,NULL);
			if(operation=getchar()=='Y')
			  continue;
			else
			if(operation=='N')
			  break;
			 
		 }
		 else
		 {
		 	printf("请输入新密码：");
			scanf("%d",&newpsw);
			printf("请输入确定密码：");
			scanf("%d",&confirmedpsw);
			if(newpsw==confirmedpsw)
			{
				psw=newpsw;
				printf("修改密码成功！\n");
				break;
			 } 
			else
			    printf("修改密码错误！\n");  
		  } 
	 } while(i>0);
	 return 0;
}
