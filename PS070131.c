//��Ӧ~��(�t)�����A�@���X�Ӷ|�~
#include <stdio.h>
int main(void)
{
	int a,b,j,i=0;
	scanf("%d %d",&a,&b);
	for(j=a;j<=b;j++)
	{
		if(j%400==0 || j%4==0 && j%100!=0)
		{
			i++;
		
		}
	}
		printf("%d",i);
	return 0;
}
