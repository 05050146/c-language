/*lab09c 05050146 �q�q�@�A �\��*/
#include <stdio.h>
void H_square(int a);

int main (void)
{
	int a,b;

	printf("�п�J��ت����:");
		
	H_square(a);
	
	return 0;
}
void H_square(int a)
{
	int d,e;
	scanf("%d",&a);
	for(d=1;d<=a;d++)
	{ 
	 	if(d==1||d==a)
	 		
	 	for(e=1;e<=a;e++)
	 	{
	 		
	 		printf("*");
	 		
	 	}
		else
		
		for(e=1;e<=a;e++)
		{
			if(e==1||e==a)
			printf("*");
			else
			printf(" ");
		}	
				
		printf("\n");
	
	}
	
	return ;	
}



