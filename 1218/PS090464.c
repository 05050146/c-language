#include <stdio.h>
int afunc(int a[],int b[]);
int main(void) 
{          
    int a[80],b[80]; 

    scanf("%s",a); 
    afunc(a,b); 
    printf("=%s",b); 
     
    return 0; 
} 
int afunc(int a[],int b[])
{
	
	int i,end;
	for(i=0;a[i]!=0;i++)
	{
		if(a[i]==1)
		b[i]=0;
		else
		b[i]=1;
	}

	return b;
}
