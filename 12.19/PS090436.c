#include <stdio.h>
int afunc(char a[]);
int main(void) 
{ 
    char a[80]; 
     
    gets(a); 
    printf("[%d]",afunc(a)); 
     
    return 0; 
} 
int afunc(char a[])
{
	int i,end=0,gg;
	for(i=0;a[i]!=0;i++)
	{
		if(a[i]>='0'&&a[i]<='9')
		{
			gg=a[i]-'0'+0;
			if(end<gg)
			end=gg;
		}
		
	}
	if(end==0)
	return -1;
	else 
	return end;
	
}

