#include <stdio.h>
int afunc(int a[]);
int main(void) 
{ 
    int a[80],i=0; 

    scanf("%d",&a[i]); 
    while (a[i]!=0) 
        scanf("%d",&a[++i]); 

    printf("[%d] ", afunc(a)); 
     
    for (i=0;a[i]!=0;i++) 
        printf("%d ",a[i]); 
     
    return 0; 
} 
int afunc(int a[])
{
	int i,j=0,b[90];
	
	b[0]=a[0];
	for(i=1;a[i]!=0;i++)
	{
		a[j++]=a[i];
	}
	a[j]=0;
	
	return b[0];
}
