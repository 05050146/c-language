//�K�i����Q�i�� 
#include <stdio.h>
int main(void)
{
	int a,b,c,d;
	scanf("%d",&a);
	b=a%10;//���X�Ӧ�� 
	c=(a-b)%100/10;//���X�Q��� 
	d=a/100;//���X�ʦ�� 
	printf("%d = %d",a,d*64+c*8+b);
	return 0;
}
