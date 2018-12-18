#include <stdio.h>
int afunc(int a[]);
int main(void) 
{ 
    char a[80]; 
     
    gets(a); 
    printf("[%d]",afunc(a)); 
     
    return 0; 
} 
int afunc(int a[])
{
	int s=0,i,b;
	for(i=0;a[i]!=0;i++)
	{
		if(a[i]>='0' && a[i]<='9')
		s+=a[i]-'0';
	}
	return s;
} 
