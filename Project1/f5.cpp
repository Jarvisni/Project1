#include<stdio.h>
int f5()
{
	int a, b, c, m = 0;
	printf("a=");
	scanf_s("%d", &a);
	printf("b=");
	scanf_s("%d", &b);
	printf("c=");
	scanf_s("%d", &c);
	if (b > c)
	{
		m = c;
		c = b;
		b = m;
	}
	if (a > b)
	{
		m = b;
		b = a;
		a = m;
	}
	if (a > c)
	{
		m = c;
		c = b;
		a = m;
	}
	if (b > c)
	{
		m = c;
		c = b;
		b = m;
	}
	printf("��С��������Ϊ%d %d %d\n", a, b, c);
	return 0;
}