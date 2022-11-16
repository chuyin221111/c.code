#include <stdio.h>
int main() 
{int  T=0,t=1;
  int n;
  for(n=1;n<=10;n++)
  {
  	t=t*n;
  	T=T+t;
  }
  printf("T=1!+2!+3!+4!+5!+6!+7£¡+8£¡+9£¡+10£¡=%d\n,",T);
  return 0;
}
