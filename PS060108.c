//該數字是否回文
#include <stdio.h>
int main(void)
{
 	int a,i,s=0,k=2;
 	
 	scanf("%d",&a);
 	while(k>0)
 	{
 		i=a%10;
 		s=s*10+i;
 		a=a/10;
 		k--;
	}
	if(s==a)
	printf("YES");
	else
	printf("NO");
	
   return 0;
}
