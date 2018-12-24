#include <stdio.h>
char afunc(char a[],int i,char c);
int main(void) 
{          
    char a[80],c; 
    int i; 

    scanf("%c",&c); 
    scanf("%s",a); 
    scanf("%d",&i); 
    afunc(a,i,c); 
    printf("[%s]\n",a); 
     
    return 0; 
} 
char afunc(char a[],int i,char c)
{
	int g,j=0;
	for(g=0;a[g]!=0;g++)
	;
	for(j=g;j>=i;j--)
	{
		a[j+1]=a[j];
		a[j]=c;

	}

	return a;
	
}
