// �q��LŪ�J1��100-999����ơA�ñN��Ū�J��ƪ��Ӧ�Ʀr��ʦ�Ʀr��ի���ܦb�e���W
#include <stdio.h>
int main(void)
{
	int a,i,j,k;
	scanf("%d",&a);
	
	i=a%10;//���X�Ӧ�� 
	j=(a-i)%100;//���X�Q��� 
	k=a/100;//���X�ʦ�� 
	
	printf("%d",i*100+j+k);
	
	
	return 0;
}
