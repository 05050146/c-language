//輸出長度及高度均為N的Z型星號
#include <stdio.h>
int main(void)
{
	int a,i,j,k;
	scanf("%d",&a);
	for(i=1;i<=a;i++)//第一行的星號 
	{
		printf("*");
	}
	printf("\n");
	for(j=1;j<=a;j++)//負責算行數 
	{
		for(k=1;k<=a-j-1;k++)//開始印出空白  -1是拿來放* 
		{
			printf(" ");
		}
		printf("*");
		if(j==a-1)//控制最後一行 不要換行 接著印最後的* 
		break;
		printf("\n");
	}
	for(i=1;i<a;i++)
	{
		printf("*");
	}

	return 0;
}
