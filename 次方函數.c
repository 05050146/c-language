#include <stdio.h>
double power (double, int);
int main (void)
{
	double x;
	int n;
	
	printf("請輸入底數與次方:");
	scanf("%lf ,%d",&x,&n);
	
	printf("%lf的%d次方=%lf\n",x,n,power(x,n));
	
	return 0;
	
}

double power (double base, int n)
{
	int i;
	double pow=1.0;
	for (i=1;i<=n;i++)
		pow = pow*base;
	
	return pow;
}
