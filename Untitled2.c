#include <stdio.h>
int main()
{
	int a=123455;
	int *p=&a;
	
	*p=544;
	printf("%d",a);
	
}
