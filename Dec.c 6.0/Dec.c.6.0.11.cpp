#include  <stdio.h>
int  main()
{  int m,i;
    printf("������һ��������"); 
   scanf("%d",&m);
   for(i=2;i<m;i++)
   {  
    if(m%i==0)
     { break;
	 }
   }
    if(i>=m)
    {
      printf("���Ǹ�������\n");
	}
	else
	{  
	   printf("�ⲻ��������\n");
	}
	return  0;
}
