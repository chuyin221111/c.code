#include <stdio.h>
int main()
{
	char a;
	int  letters=0,space=0,digit=0,others=0;
 	printf("������һ���ַ���\n");
	   while((a=getchar())!='\n')
	  {
    	  if(a>='a'&&a<='z'||a>='A'&&a<='Z')
	     
		   letters++;
	     
		  else if(a==' ')
	     
			space++;
			
		  else if(a>='0'&&a<='9')
	     
		    digit++;
		  
		  else 
		 
		  others++;
	     
	     
	   }
	printf("Ӣ����ĸ��=%d\n�ո���=%d\n������=%d\n�����ַ�=%d\n",letters,space,digit,others);
    return 0;
	
	}
    
    
