#include <stdio.h>
int afunc(int n1);
int main(void)
{
    int n1;
    
    scanf("%d",&n1);
    printf("%d",afunc(n1));
    
    return 0;
}
int afunc(int n1)
{
	if(n1==1)
	return n1;
	return n1+afunc(n1-1);
}
