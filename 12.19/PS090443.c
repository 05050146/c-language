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
	int i,s=0;
	for(i=0;a[i]!=0;i++)
	{
		s=a[i]-'0'+s*10;
	
	}
	return s;	
}
