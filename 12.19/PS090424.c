#include <stdio.h>
char afunc(char a[],int m,int n,char b[]); 
int main(void) 
{ 
    char a[80],b[80]; 
    int m,n; 
     
    scanf("%s",a); 
    scanf("%d%d",&m,&n); 
    afunc(a,m,n,b); 
    printf("[%s]",b); 
     
    return 0; 
} 

char afunc(char a[],int m,int n,char b[])
{
	int i,j=0;
	
	for(i=m;i<m+n;i++)
	{
		b[j++]=a[i];
	}
	b[j]=0;
	return b;
}
