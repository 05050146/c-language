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
	int b[80],i=0,j=0,end;
	while(n>0)
	{
		a[i++]=n%10+'0';
		n/=10;
		
	}
	for(i=0;a[i]!=0;i++)
	{
		b[j++]=a[i];
	}
	b[j]=0;

	end=i;
	for(i=0;a[i]!=0;i++)
	{
		a[i]=b[j--];
	}
	a[i]=0;
	return b;
}
