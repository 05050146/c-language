#include <stdio.h>

int is_prime(int n);
int main ()

{
	int n,i;

	scanf("%d",&n);

	
	for	(i=2;i<=n;i++)
	{
		if(is_prime(i))
			printf("%d ",i);
	}
return 0;
	
}
int is_prime(int i)
{
	int j;
	for (j=2;j<i;j++)
		if (i%j==0)
		return 0;
		
	return 1;
}
