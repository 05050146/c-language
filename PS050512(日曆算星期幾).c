//���q��LŪ�J�Ӥ몺1�鬰�P���X�A�A�q��LŪ�J���(1-30)�A��X�Ӥ鬰�P���X(0��ܬP����
#include <stdio.h>
int main(void)
{
	int a,b;
	
	scanf("%d",&a);
	scanf("%d",&b);
	
	printf("1=%d\n",a);
	printf("%d=%d",b,(b+a-1)%7);
	return 0;
} 
