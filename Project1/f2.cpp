#include<stdio.h>
int f2()
{
	int s=1;
	double sum, t ,fenmu;
	t = 1;
	sum = 1;
	fenmu = 2;
	while (fenmu <= 100)
	{
		s = -s;
		t = s/fenmu;
	    sum = sum + t;
	    fenmu = fenmu + 1;
		//printf("%d", fenmu);
    }
    printf("%f\n", sum);
	return 0;
}