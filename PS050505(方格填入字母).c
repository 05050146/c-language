//����J�r�� 
#include <stdio.h>
int main(void)
{
	int a,b,f;
	char c;
	scanf("%d %d",&a,&b);
	
	f=(a*5+b)%26+65;//��X�ĴX�� �A��26���l�� �A�Q��ASCLL�L�X 
	printf("(%d,%d)=%c",a,b,f);
	
	return 0;
}
