
 #include  <stdio.h>
int  main()
{
  int x;
  printf("100-200������5����3����7����2������������:\n");
  for(x=100;x<=200;x++) 
  {  
      if(x%5==3&&x%7==2)
        printf("%d\n",x);
    }
}
