#include <stdio.h>
int main (void)
{
	int c,d;
	char a,b;
	scanf("%c%c",&a,&b);

	if(a>='0'&& a<='9')
	d=(a-'0')*16;
	else if(a>='A'&& a<='F')
	d=(a-'A'+10)*16;//�p��Q��� 
	
	if(b>='0'&& b<='9')
	c=(b-'0');	
	else if(b>='A'&& b<='F')
	c=(b-'A'+10);//�p��Ӧ�� 
	
	printf("%c%c=%d",a,b,d+c);

	
	return 0;
}
