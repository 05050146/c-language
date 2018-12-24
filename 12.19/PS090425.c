#include <stdio.h>
int afunc(char a[],char b[]);
int main(void) 
{ 
    char a[80],b[80]; 
     
    scanf("%s",a); 
    scanf("%s",b); 
    printf("[%d]",afunc(a,b)); 
     
    return 0; 
} 
int afunc(char a[],char b[])
{
	int i,end;
	for(i=0;a[i]!=0;i++)
	;
	end=i;
	for(i=0;i<end;i++)
	{
		if(a[i]!=b[i])
		return i;
		else 
		continue;
	} 
	if(i>=end-1)
	return -1;
	
}
