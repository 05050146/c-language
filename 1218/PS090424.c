#include <stdio.h>
void afunc(char a[],int m,int n,char b[]); 
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

void afunc(char a[],int m,int n,char b[])
{
	int i,j=0;
	for(i=0;a[i]!=0;i++)
	;
	if(m>=i)
	{
		b[0]=0;
	}
	for(i=m;i<m+n && a[i]!=0;i++)
	{
		b[j++]=a[i];
	}
	b[i]=0;
	return ;
}
