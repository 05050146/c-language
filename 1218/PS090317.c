#include <stdio.h>
int afunc(int a[],int b[],int n); 
int main(void) 
{ 
    int a[80],b[80],i=0,n; 

    scanf("%d",&a[i]); 
    while (a[i]!=0) 
        scanf("%d",&a[++i]); 
    scanf("%d",&n); 

    afunc(a,b,n); 

    for (i=0;b[i]!=0;i++) 
        printf("%d ",b[i]); 
     
    return 0; 
} 
int afunc(int a[],int b[],int n)
{
	int i,end,j=0;
	for(i=0;a[i]!=0;i++)
	;
	end=i;
	for(i=end-n;i<end;i++)
	{
		b[j++]=a[i];
		b[j]=0;		
	}
	
	return b;
}
