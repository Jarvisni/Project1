#include<stdio.h>
#include<stdlib.h>
int f7()
{
	int ch;
	void s2h(), h2s();
swf7:printf("1.���϶�ת���϶�\n2.���϶�ת���϶�\nYour choice:");
	scanf_s("%d", &ch);
	switch (ch)
	{
	case 1:system("CLS"); s2h(); break;
	case 2:system("CLS"); h2s(); break;
	default:system("CLS"); printf("error"); goto swf7;
    }
	printf("\n");
	return 0;
}
void s2h()
{
	int ch, a;
	printf("����Ҫת�������϶ȣ�");
	scanf_s("%d",&ch);
	a = ch * 9 / 5 + 32;
	printf("%d���϶�=%d���϶�", ch, a);
}
void h2s()
{
	int ch, a;
	printf("����Ҫת���Ļ��϶ȣ�");
	scanf_s("%d", &ch);
	a = (ch - 32) * 5 / 9;
	printf("%d���϶�=%d���϶�", ch, a);
}