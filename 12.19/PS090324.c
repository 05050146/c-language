#include <stdio.h>
int afunc(int a[],int  m,int n);
int main(void) 
{ 
    int a[80],i=0,n,m; 

    scanf("%d",&a[i]); 
    while (a[i]!=0) 
        scanf("%d",&a[++i]); 
    scanf("%d%d",&m,&n);  
     
    afunc(a,m,n); 
     
    for (i=0;a[i]!=0;i++) 
        printf("%d ",a[i]); 
     
    return 0; 
} 
int afunc(int a[],int  m,int n)
{
	int i,end=0,j;
	for(i=0;a[i]!=0;i++)
	;
	for(j=i;j>=m;j--)
		a[j+1]=a[j];
		a[m]=n;
	return a;
	
	
}
