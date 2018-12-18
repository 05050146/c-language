#include <stdio.h>
char afunc(char a[],char c);
int main(void) 
{ 
    char a[80],c; 
     
    scanf("%c",&c); 
    scanf("%s",a); 
    printf("[%d]",afunc(a,c)); 
     
    return 0; 
} 
char afunc(char a[],char c)
{
	int i;
	for(i=0;a[i]!=0;i++)
	{
		if(a[i]==c)
		return i;
		
		
	}
	
	
	if(a[i]==0)
	return -1;
	
}

