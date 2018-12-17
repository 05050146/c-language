#include <stdio.h>
void afunc(int a[],int n);
int main(void) 
{ 
    int a[20],i=0,n; 

    scanf("%d",&a[i]); 
    while (a[i]!=0) 
        scanf("%d",&a[++i]); 
	
	scanf("%d",&n);
	afunc(a,n);

     
    return 0; 
} 
void afunc(int a[],int n)
{
	int i;
	for(i=0;a[i]!=0;i++)
	{
		if(a[i]==n)
		printf("%d ",i);
	}
	return ;
}
