#include <stdio.h>
char afunc(char a[],char b[],char c[]);
int main(void) 
{          
    char a[80],b[80],c[80]; 

    scanf("%s",a); 
    scanf("%s",b); 
    afunc(a,b,c); 
    printf("[%s]\n",c); 
     
    return 0; 
} 
char afunc(char a[],char b[],char c[])
{
	int i,end;
	for(i=0;a[i]!=0;i++)
	end=i;
	for(i=end-1;i>=0;i--)
	{
		if(a[i]==1&&b[i]==1)
		c[i]=0;
		else if(a[i]==1||b[i]==1)
		c[i]=1;
		else
		c[i]=0;
		return c;
	}
	
}
