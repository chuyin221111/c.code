#include <stdio.h>
#define TOPLIMIT 5
int main()
{
	int psw=123456;
	int temppsw,newpsw,confirmedpsw;
	int i=TOPLIMIT;
	char operation;
	printf("�����������������޸Ĺ��ܡ�����������");
	do
	{
		printf ("������ԭ���룺");
		scanf("%d",&temppsw);
		if(psw!=temppsw)
		{
			i--;
			if(i<=0)
			{
				printf("�޸���������ﵽ���ޣ�");
				break; 
			}
			printf("ԭ�����������󣬻���%d����������Ļ��ᡣ\n",i);
			printf("�Ƿ��ٴγ�������ԭ���룿(Y|N)");
			setbuf(stdin,NULL);
			if(operation=getchar()=='Y')
			  continue;
			else
			if(operation=='N')
			  break;
			 
		 }
		 else
		 {
		 	printf("�����������룺");
			scanf("%d",&newpsw);
			printf("������ȷ�����룺");
			scanf("%d",&confirmedpsw);
			if(newpsw==confirmedpsw)
			{
				psw=newpsw;
				printf("�޸�����ɹ���\n");
				break;
			 } 
			else
			    printf("�޸��������\n");  
		  } 
	 } while(i>0);
	 return 0;
}
