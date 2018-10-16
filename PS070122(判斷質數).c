#include <stdio.h>
int main (void)
{
	
	int a,i,j=0;
	scanf("%d",&a);
	for(i=2;i<a;i++)
	{
		if(a%i==0)
		j++;
		
	}
	if(j)
	printf("NO");
	else
	printf("YES");

	return 0;
 } 
