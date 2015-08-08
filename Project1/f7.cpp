#include<stdio.h>
#include<stdlib.h>
int f7()
{
	int ch;
	void s2h(), h2s();
swf7:printf("1.摄氏度转华氏度\n2.华氏度转摄氏度\nYour choice:");
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
	printf("输入要转换的摄氏度：");
	scanf_s("%d",&ch);
	a = ch * 9 / 5 + 32;
	printf("%d摄氏度=%d华氏度", ch, a);
}
void h2s()
{
	int ch, a;
	printf("输入要转换的华氏度：");
	scanf_s("%d", &ch);
	a = (ch - 32) * 5 / 9;
	printf("%d华氏度=%d摄氏度", ch, a);
}