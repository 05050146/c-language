#include <stdio.h>
int afunc(int a[],int b[],int m,int n); 
int main(void) 
{ 
    int a[80],b[80],i=0,m,n; 

    scanf("%d",&a[i]); 
    while (a[i]!=0) 
        scanf("%d",&a[++i]); 
    scanf("%d%d",&m,&n); 

    afunc(a,b,m,n); 

    for (i=0;b[i]!=0;i++) 
        printf("%d ",b[i]); 
     
    return 0; 
} 
int afunc(int a[],int b[],int m,int n)
{
	int i,j=0;
	for(i=0;a[i]!=0;i++)
	;
	for(i=m;i<m+n;i++)
	{
		b[j++]=a[i];
	}
	b[j]=0;
	return b;
}
