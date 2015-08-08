#include<stdio.h>
#include<stdlib.h>
int main()
{
	void cs();
	int chr;
lp:cs();
swindex:printf("Your choice:");
    scanf_s("%d",&chr);
	//chr = chr - 48;
	switch (chr)
	{
	case 1:system("cls"); goto lp; break;
	case 2:break;
	default:printf("error\n"); goto swindex;
	}
	return 0;
}
void cs()
{
	int ch;
	int f1();
	int f2();
	int f3();
	int f4();
	int f5();
	int f6();
	int f7();
swindex2:printf("-------------------\n");
	printf("--which function?--\n");
	printf("-------------------\nf");
	scanf_s("%d", &ch);
	system("CLS");
	printf("-----------------------------------------------\n");
	//ch = ch - 48;
	switch (ch)
	{
	case 1:f1(); break;
	case 2:f2(); break;
	case 3:f3(); break;
	case 4:f4(); break;
	case 5:f5(); break;
	case 6:f6(); break;
	case 7:f7(); break;
	default:system("CLS"); printf("error\n"); goto swindex2;
	}
	printf("-----------------------------------------------\nf%d‘À––Ω· ¯\n1 for again,2 for exit\n", ch);
}