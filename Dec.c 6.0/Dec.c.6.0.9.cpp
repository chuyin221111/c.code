#include  <stdio.h>
int  main ()
{ 
   int x=100;
	  do
       {
		  if(x%5==3&&x%7==2)
           {
			 printf("%d\n",x);
		   }
		   x++;
        }
        
       while(x<200);  

	
	return 0;
}
