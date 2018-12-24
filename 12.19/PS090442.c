#include <stdio.h>
char afunc(int n,char a[]); 

int main(void)
{	 	
	int n;
	char a[80];

	scanf("%d",&n);
	afunc(n,a);
	printf("[%s]\n",a);
	
	return 0;
}
char afunc(int n,char a[])
{
	int i,gg=0,end=0;
	while(n>0)
	{
		gg=(gg*10+n%10);
		n/=10;
		end++;	
	}

	for(i=0;i<end;i++)
	{
		a[i]=gg%10+'0';
		gg/=10;
	}
	a[i]=0;
	
	return a;
	
}
