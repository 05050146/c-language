//A鏡射到Z，字母B鏡射到Y
#include <stdio.h>
int main(void)
{
	int i;
	char a;
	scanf("%c",&a);
	i=a-64;//算出輸入字母的順序 

	printf("%c=%c",a,'Z'+1-i);//Z倒數算回去 
	return 0;
}
