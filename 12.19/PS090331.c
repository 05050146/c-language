#include <stdio.h>
int afunc(int a[],int n);
int main(void) 
{ 
    int a[80],n,i; 

    scanf("%d",&n); 

    afunc(a,n); 
     
    for (i=0;a[i]!=-1;i++) 
        printf("%d ",a[i]); 
     
    return 0; 
} 
int afunc(int a[],int n)
{
	int i=0,end=0,gg=0;
	while(n>0)
	{
		gg=gg*10+n%10;
		n/=10;
		end++;
	}

	for(i=0;i<end;i++)
	{
		a[i]=gg%10;
		gg/=10;
	}
	a[i]=-1;
	return a;
}
