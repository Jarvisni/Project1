#include<stdio.h>
#include<stdlib.h>
int f3()
{
	int ch;
swf3:printf("1 for shutdown,2 for cancel\n");
	printf("your choice:");
    scanf_s("%d", &ch);
	//printf("%d,", ch);
	//ch = ch - 48;
	switch (ch)
	{
	case 1:system("shutdown -s -t 20"); break;
	case 2:break;
	default:system("CLS"); printf("error\n"); goto swf3;
	}
	return 0;
}