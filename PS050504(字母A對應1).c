//字母A對應到1，字母B對應到2，依此類推到字母Z對應到26。
#include <stdio.h>
int main(void)
{
	char c;
	scanf("%c",&c);
	printf("%c=%d",c,c-64);//利用ASCLL算出字母順序 
	
	return 0;
}
