#include<stdio.h>
int main()
{
 int a[50] , x, i=0, j, sum = 0;
 while (1) {
  scanf("%d", &x);
  a[i] = x;
  i++;
  if (x == -1)
   break;
 }
 for (i = 0; i < 50; i++) {
  for (j = i+1; j < 49; j++) {
   if (a[i] == a[j]) {
    sum++;
   }
  }
 }
 printf("同一整数的个数为%d", sum);
 return 0;
}
