#include <stdio.h>
int afunc(char a[]); 
int main(void) 
{          
    char a[80]; 
    int n; 

    scanf("%s",a); 
    printf("[%d]",afunc(a)); 
     
    return 0; 
} 
int afunc(char a[])
{
	int i,j=0,b[80];
	for(i=0;a[i]!=0;i++)
	{
		j=j*10+a[i]-'0';
		
	}

	return j;	
}
