#include  <stdio.h>
int  main()
{  int m,i;
    printf("请输入一个整数："); 
   scanf("%d",&m);
   for(i=2;i<m;i++)
   {  
    if(m%i==0)
     { break;
	 }
   }
    if(i>=m)
    {
      printf("这是个素数。\n");
	}
	else
	{  
	   printf("这不是素数。\n");
	}
	return  0;
}
