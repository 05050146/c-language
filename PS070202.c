//*�ˤT���� 
#include <stdio.h>
int main (void)
{
	int a,i,j,k;
	scanf("%d",&a);
	for(i=1;i<=a;i++)
	{
		for(j=1;j<=a-i+1;j++)
		printf("*");
		
		printf("\n");
	}
	
	return 0;
 } 
