#include <stdio.h>
int afunc(int a[],int n);
int main(void) 
{ 
    int a[80],i=0,n; 

    scanf("%d",&a[i]); 
    while (a[i]!=0) 
        scanf("%d",&a[++i]); 
    scanf("%d",&n);  
     
    afunc(a,n); 
     
    for (i=0;a[i]!=0;i++) 
        printf("%d ",a[i]); 
     
    return 0; 
} 
int afunc(int a[],int n)
{
	int i,j;
	for(i=0;a[i]!=0;i++)
	;
	for (j=i;j>=n;j--)
	a[j+1] = a[j];

	a[i]=n;
	return a;
	
}
