#include <stdio.h>

int main() {
	void fun1(int *x[5][5]);         //�������� 
	void fun2(int *x[5][5], int a, int b);
	void fun3(int *x[5][5], int i);
	int *a[5][5] = {0};
	int x, y,i,j;
	int z, n;
	printf("�������ά����\n");
	for (i = 0; i < 2; i++) 
	{
		for ( j = 0; j < 5; j++)
         {
         	scanf("%d", &a[i][j]);  //���� 
		 }
	}
	fun1(a);   
	printf("������Ҫ����λ�õ������λ��\n");
	scanf("%d,%d", &x, &y);
	fun2(a, x, y);
	printf("����n��ֵ��ƽ�Ƶ�һ��\n");
	scanf("%d", &n);
	fun3(a, n);
	for (int i = 0; i < 2; i++) 
	{
		for (int j = 0; j < 5; j++) 
		{
			printf("%-5d", a[i][j] );
			if (j == 4)
			printf("\n");
		}
	}

	return 0;
}

void fun1(int *x[5][5])   //ָ����Ϊ�β� 
{
	printf("������Ľ��Ϊ��\n");
	int *y[5];
	int *z[5];
	int i,j,k; 
	for ( i = 1, k = 0; i < 2, k < 1; i++, k++) 
	{
		for ( j = 0; j < 5; j++) 
		{
			y[j] = x[k][j];
			z[j] = x[i][j];
		}
	}
	for ( i = 0, k = 1; i < 1, k < 2; i++, k++) 
	{
		for ( j = 0; j < 5; j++)    //�����еĽ��� 
		 {
			x[i][j] = z[j];     
			x[k][j] = y[j];
		}
	}
	for ( i = 0; i < 2; i++)
	 {
		for ( j = 0; j < 5; j++)
		 {
			printf("%-5d", x[i][j] );  //���������ά���� 
			if (j == 4)
			printf("\n");
		}
	}
}

void fun2(int *x[5][5], int a, int b) 
{
	int *t;
	if (a < 6 )
	 {
		t = x[0][a - 1];
		if (b < 6)     //ͬ�е�ֵ���� 
		 {
			x[0][a - 1] = x[0][b - 1] ;
			x[0][b - 1] = t;
		 } 
		else
	    {
			x[0][a - 1] = x[1][b - 6] ;   //��ͬ�е�ֵ���� 
			x[1][b - 6] = t;
		}

   	 }
	 else 
	 { 
		t = x[1][a - 5];
		if (b < 6)
		{
			x[1][a - 6] = x[0][b - 1] ;
			x[0][b - 1] = t;
		} 
		else 
		{
			x[1][a - 6] =	x[1][b - 6];
			x[1][b - 6] = t;
		}
	}
	printf("������Ľ��Ϊ\n");
	for (int i = 0; i < 2; i++)
	 {
		for (int j = 0; j < 5; j++)
		 {
			printf("%-5d", x[i][j] );  //����¶�ά���� 
			if (j == 4)
			{
				printf("\n");
			}
		}
	}

}

void fun3(int *x[5][5], int c)
 {
	int t = c % 5;
	int *b[5];
	int *y[5];
	int i,j; 
	for ( i = 1; i < 2; i++)
	 {
		for ( j = 0; j < 5; j++) 
		{
			y[j] = x[i][j];
		}

	 }
	for ( i = 0; i < 5; i++)
	 {
		b[i] = x[0][i];
	 }

	if (t >= 0)
	 {

		for ( i = 0; i < 5; i++) 
		{
			if (t + i > 4)
			{
		    	x[0][t + i - 5] = b[i];
			}
				
			x[0][t + i] = b[i];
		}
	}
	else if (t < 0) 
	{
		for (int i = 0; i < 5; i++)
		 {
			if ( 4 + t - i < 0 ) 
			{
				x[0][4 + t - i + 5] = b[4 - i];
			}
			x[0][4 + t - i] = b[4 - i];
		}
	}
	for (int j = 0; j < 5; j++)
		x[1][j] = y[j];
}


