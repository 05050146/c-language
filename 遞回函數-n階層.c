#include <stdio.h>
int f(int n);
int main (void)
{

	printf("%d",f(4));
	return 0;
}

int f(int n)

{

 if (n==1)
 return 1;
 return n*f(n-1);
}
