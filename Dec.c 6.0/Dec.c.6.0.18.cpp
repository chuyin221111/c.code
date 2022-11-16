#include <stdio.h>
int main()
{
	char a;
	int  letters=0,space=0,digit=0,others=0;
 	printf("请输入一行字符：\n");
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
	printf("英文字母数=%d\n空格数=%d\n数字数=%d\n其他字符=%d\n",letters,space,digit,others);
    return 0;
	
	}
    
    
