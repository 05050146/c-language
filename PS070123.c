//輸入值 做反轉後相加 1234+4321=5555 
#include <stdio.h>
int main (void)
{
	int a,i,s,j=0;
	
	scanf("%d",&a);

	j+=a;
	while(a>0)
	{
		i=a%10;
		s=s*10+i;
		a=a/10;
		
	}
	printf("%d+%d=%d",j,s,j+s);
	
	return 0;
 } 
