//­^§`Âà´« 
#include <stdio.h>
int main(void)
{
	int a,b;
	double c;
	scanf("%d %d",&a,&b);
	c=a*0.3048+b/(double)12*0.3048;
	printf("%d FT + %d IN = %.4f M",a,b,c);
	return 0;
}
