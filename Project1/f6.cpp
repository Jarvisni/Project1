#include<stdio.h>
#include<stdlib.h>
int f6()
{
	int a;
	void pd(), qiu();
swf6:printf("-----------------------\n1.�ж�һ�����Ƿ�Ϊ����\n2.��n���ڵ�����\n-----------------------\nYour choice:");
    scanf_s("%d",&a);
	switch (a)
	{
	case 1:pd(); break;
	case 2:qiu(); break;
	default:system("CLS"); printf("error\n"); goto swf6;
	}
	return 0;
}
void pd()
{
	int pd, t, l;
	printf("Ҫ�жϵ���Ϊ��");
	scanf_s("%d",&pd);
	t = 2;
	l = 0;
	while (t < pd)
	{
		if (pd%t == 0)
		{
			l = 1;
		}
		t = t + 1;
	}
	if (l == 0)
		printf("%d������\n", pd);
	else 
		printf("%d��������\n", pd);
}
void qiu()
{
	int a=2,n,t,l;
	printf("��n���ڵ�����\nn=");
	scanf_s("%d", &n);
	while (a <= n)
	{
		t = 2;
		l = 0;
		while (t < a)
		{
			if (a%t==0)
			{
				l = 1;
			}
		    t = t + 1;
		}
		if (l == 0)
		{
		printf("%d,", a);
		}
		a = a + 1;
	}
	printf("\b\n");
}