#include <stdio.h>
int main (void)
{
	int a,b,c,d;   
	
	scanf("%d",&a);    /*��J�Ʀra*/
	
	for (b=1;b<=a;b++)    /*b�q1�}�l,�N����*/
	{
		for(c=0;c<=a-b;c++)    /*c�q0�}�l,�Ĥ@��̦h�Ů�,�H��ƻ���*/
		{
			printf(" ");
		}
		for(d=1;d<=a;d++)   /*d�q1�}�l,�C�泣�L�X�@�˼ƶq���P�P*/ 
		{
			printf("*");
		}
		
		printf("\n");
	}
	return 0;
}
