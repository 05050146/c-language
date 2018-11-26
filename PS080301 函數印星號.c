#include <stdio.h>
void afunc(int n1);
int main(void)
{
    int n1;
    
    scanf("%d",&n1);
    afunc(n1);
    
    return 0;
}
void afunc(int n1)
{
	if(n1==1)
	{
		printf("*");
		return ;
	}
	else
	{
		afunc(n1-1);
		printf("*");
		return ;
	}
}
