#include <stdio.h>
int afunc(int a[]);
int main(void) 
{ 
    int a[80],i=0; 

    scanf("%d",&a[i]); 
    while (a[i]!=0) 
        scanf("%d",&a[++i]); 

    printf("[%d]",afunc(a)); 
     
    return 0; 
} 
int afunc(int a[])
{
	int i,end=0;
	for(i=0;a[i]!=0;i++)
	end+=a[i];
	return end;
}

