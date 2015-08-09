#include<stdio.h>
int f8()
{
	printf("1+2+3+...+99+100=");
	int a=1, sum=0;
	while (a <= 100)
	{
		sum = sum + a;
		a = a + 1;
	}
	printf("%d\n",sum);
	return 0;
}