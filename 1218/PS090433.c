#include <stdio.h>
char afunc(char a[],char b[],char c[]); 
int main(void) 
{ 
    char a[80],b[80],c[80]; 
     
    gets(a); 
    gets(b); 
    afunc(a,b,c); 
    printf("[%s]",c); 
     
    return 0; 
} 
char afunc(char a[],char b[],char c[])
{
	int i,j=0;
	for(i=0;a[i]!=0;i++)
	{
		c[j++]=a[i];
		c[j++]=b[i];
	
	}
	c[j]=0;	
	return c;
}
