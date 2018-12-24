#include <stdio.h>
void afunc(int a[]); 
int main(void) 
{ 
    int a[80],i=0; 

    scanf("%d",&a[i]); 
    while (a[i]!=0) 
        scanf("%d",&a[++i]); 

    afunc(a); 
     
    return 0; 
} 
void afunc(int a[])
{
	int i,end;
	for(i=0;a[i]!=0;i++)
	;
	end=i;
	for(i=end-1;i>=0;i--)
	{
		printf("%d ",a[i]);
	}
	return ;
}
