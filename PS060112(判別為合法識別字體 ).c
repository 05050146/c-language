//判別為合法識別字體 
#include <stdio.h>
int main(void)
{
	int c;
	char a,b;
	scanf("%c%c",&a,&b);
	if(a>=65&&b>=10)
	{
		printf("YES");
	}
	else 
	printf("NO");
	
	return 0;
	
}
