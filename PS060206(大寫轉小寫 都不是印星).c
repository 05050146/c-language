#include <stdio.h>

int main(void)

{
	char a;
	scanf("%c",&a);

	if(a>='A'&& a<='Z') 

	{
		printf("%c",a-'A'+'a');
	}

	else if(a>='a'&& a<='z') 
	{
		printf("%c",a-'a'+'A');
	}

	else
	{
		printf("*");
	}	 
	return 0;
}
