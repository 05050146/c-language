#include <stdio.h>
int main (void)
{
	int a,b,c;//�]�w3���ܼ� 
	printf("�п�J��� A:");
	scanf("%d",&a);
	
	printf("�п�J��� b:");
	scanf("%d",&b);
	
	printf("��J:");
	for(c=b;c<a;c++)//�]�w�j��P�_ 
	{
		if(c%b==0)//�p�Gc��b���l�Ƭ�0,�N�L�X�� 
		printf("%d ",c);
		
	}
	return 0;
}
