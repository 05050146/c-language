#include <stdio.h>
int main (void)
{
	int a,b,i,k;
	scanf("%d %d",&a,&b);
	
	for(k=1;k<=b;k++)
		printf("   ");//�P���X �N������X�� 3�Ů� 
	for(i=1;i<=a;i++)
	{
		if(i<10)
		printf(" ");//<10����� ���ƪ� 
		
		printf("%d ",i);
		if((i+b)%7==0)//�L7�� ���� 
		printf("\n");

	}
	
	return 0;
 } 
