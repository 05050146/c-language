#include <stdio.h>
void afunc(int n,char a[]); 
int main(void) 
{          
    int n; 
    char a[80]; 

    scanf("%d",&n); 
    afunc(n,a); 
    printf("[%s]\n",a); 
     
    return 0; 
} 
void afunc(int n,char a[])
{
	int i;
	for(i=0;a[i]!=0;i++)
	{
		if(n==0)
		break;
		a[i]=n%10+'0';
		n/=10;	
	}

	return a;
}
