

#include <stdio.h>
#include <math.h>

void output(char *s, int n);            //声明输出函数

int main()
{
    char str[30]={0};
    printf("Please enter string: ");    //输入字符串
    gets(str);
    output(str, 30);                    //调用输出函数
    return 0;
}

//输出函数
void output(char *s, int n)
{
    char *i;
    int j=0, k, t, m=0, temp[10], num=0;
    double sum, a[30];
    for (i=s; i<s+n; i++)
    {
     if (*i>='0'&&*i<='9') 
	 {
	   num=1;
	   temp[j++]=(int)(*i-'0');
      }
        else if (num)
       {    
            num=0;k=0;sum=0;
            for ( t=j-1; k<j;k++);
            a[m++]=sum, j=0;
            sum+=temp[k]*pow(10, t); 
			t--;
        }
 }
    for(j=0;j<m; )
    {
      printf("There is %d number in the string.\nResult: ", m);
	  printf("%.0f ", a[j++]);	
	}
    printf("\n");
}
