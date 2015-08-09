#include<stdio.h>
int f9()
{
	int a, n = 1, sum = 0;
	printf("ÇóaµÄ½×³Ë\na=");
	scanf_s("%d", &a);
	while (n <= a)
	{
		sum = sum + n;
		n = n + 1;
	}
	printf("%d!=%d\n",a ,sum);
	return 0;
}