#include <stdio.h>
char afunc(char a[],char b[]);
int main(void) 
{          
    char a[80],b[80]; 

    scanf("%s",a); 
    afunc(a,b); 
    printf("[%s]\n",b); 
     
    return 0; 
} 
char afunc(char a[],char b[])
{
	
	int i,end;
	for(i=0;a[i]!=0;i++)
	{
		if(a[i]=='1')
		b[i]='0';
		
		else if(a[i]=='0')
		b[i]='1';
	}
	
	return b;
}
