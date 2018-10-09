#include <stdio.h>

int main(void)

{
	char a,b;
	scanf("%c%c",&a,&b);

	if(a>='A'&& a<='Z') 
	{
		if(b>='A'&& b<='Z')
		printf("+");
		else
		printf("?");
	}
	
	else if(a>='a'&& a<='z') 
	{
		if(b>='a'&& b<='z')
		printf("+");
		else
		printf("?");
	}


	return 0;
}
