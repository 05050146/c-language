#include <stdio.h>
int afunc(int n1,int n2);
int main(void)
{
    int n1,n2;
    
    scanf("%d%d",&n1,&n2);
    printf("GCD=[%d]\n",afunc(n1,n2));
    
    return 0;
}

int afunc(int n1,int n2)
{
	int i=1,s=0;
	for(i=1;i<=n1 && i<=n2;i++)
	{
		if(n1%i==0 && n2%i==0)
		s=i*1;	
	}
	return s;
	
}
