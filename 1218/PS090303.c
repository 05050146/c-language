#include <stdio.h>
int afunc(int a[]); 
int main(void) 
{ 
    int a[80],i; 

    afunc(a); 

    for (i=0;a[i]!=0;i++) 
        printf("%d ",a[i]); 
     
    return 0; 
}
int afunc(int a[])
{
	int i=0;
	scanf("%d",&a[i]);
	while (a[i]!=0) 
        scanf("%d",&a[++i]); 
	return a;	
	
}
