#include <stdio.h>
char afunc(char a[],char b[]); 
int main(void) 
{ 
    char a[80],b[80]; 
     
    gets(a); 
    afunc(a,b); 
    printf("[%s]",b); 
     
    return 0; 
} 
char afunc(char a[],char b[])
{
	int i,j=0;
	for(i=0;a[i]!=0;i++)
	{
		b[j]=a[i];
		b[++j]=' ';
		j++;	
	}
	return b;
}
