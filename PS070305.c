//��X���פΰ��ק���N��Z���P��
#include <stdio.h>
int main(void)
{
	int a,i,j,k;
	scanf("%d",&a);
	for(i=1;i<=a;i++)//�Ĥ@�檺�P�� 
	{
		printf("*");
	}
	printf("\n");
	for(j=1;j<=a;j++)//�t�d���� 
	{
		for(k=1;k<=a-j-1;k++)//�}�l�L�X�ť�  -1�O���ө�* 
		{
			printf(" ");
		}
		printf("*");
		if(j==a-1)//����̫�@�� ���n���� ���ۦL�̫᪺* 
		break;
		printf("\n");
	}
	for(i=1;i<a;i++)
	{
		printf("*");
	}

	return 0;
}
