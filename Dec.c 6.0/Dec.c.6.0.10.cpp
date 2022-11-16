
 #include  <stdio.h>
int  main()
{
  int x;
  printf("100-200中能用5除余3，用7除余2的所有整数有:\n");
  for(x=100;x<=200;x++) 
  {  
      if(x%5==3&&x%7==2)
        printf("%d\n",x);
    }
}
