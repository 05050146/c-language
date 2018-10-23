#include <stdio.h>
int main (void)
{
	int a,b,i,k;
	scanf("%d %d",&a,&b);
	
	for(k=1;k<=b;k++)
		printf("   ");//星期幾 就往後推幾格 3空格 
	for(i=1;i<=a;i++)
	{
		if(i<10)
		printf(" ");//<10的日期 做排版 
		
		printf("%d ",i);
		if((i+b)%7==0)//過7天 換行 
		printf("\n");

	}
	
	return 0;
 } 
