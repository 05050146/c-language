//兩個年份(含)之間，共有幾個閏年
#include <stdio.h>
int main(void)
{
	int a,b,j,i=0;
	scanf("%d %d",&a,&b);
	for(j=a;j<=b;j++)
	{
		if(j%400==0 || j%4==0 && j%100!=0)
		{
			i++;
		
		}
	}
		printf("%d",i);
	return 0;
}
