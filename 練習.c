#include <stdio.h>
int main (void)

{
	int n1,i,j;
	scanf("%d",&n1);
	
	for(i=0,i<=n1,i++)
	{
		for(j=(n1-1);j>0;j--)
		print(" ");
		printf("*\n");
		
		if(i>1)
		{
			for (j=1;j<=(i-1)*2-1;j++)
			print(" ");
		printf("*\n");
		}
		printf("\n");
	} 
	
	return 0;
} 
