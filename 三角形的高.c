/*lab09c 05050146 �q�q�@�A �\��*/
#include <stdio.h>
void E_triangle(int n);
int main (void)
{
	int n;
	printf("�п�J�T���Ϊ���:");
	scanf("%d",&n);	
	E_triangle(n);
	
	return 0;
}
void E_triangle(int n)
{
	int a,s,d;
	if(n>1)
	for(a=1;a<=n;a++)
	{
		
		for(d=1;d<=n-a;d++)
		
			printf(" ");
			
		
		for(s=1;s<=a*2-1;s++)
		
			printf("*");
		
		printf("\n");
	}
	
	
	return ;
}
