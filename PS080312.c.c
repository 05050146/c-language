#include <stdio.h>
void afunc(int n);
void bfunc(int n);
int main(void)
{

    int n;
    scanf("%d",&n);
    afunc(n);
    return 0;

} 
void afunc(int n)
{
	if(n==0)
	{
		return ;
	}
	bfunc(n);
	afunc(n-1);
	return ;
}
void bfunc(int n)
{
	if(n==0)
	{
		printf("\n");

		return;
	}
	printf("*");
	bfunc(n-1);

}
