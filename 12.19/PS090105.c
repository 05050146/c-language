#include <stdio.h>//注意題目範例要不要空格 
void afunc(int a[],int b);
int main(void)
{
	int a[20],b,i=0,n;
	for(i=0;i<20;i++)
	{
		scanf("%d",&a[i]);
		if(a[i]==0)
		break;
	}
	scanf("%d",&b);
	afunc(a,b);
	
	
	return 0;
}
void afunc(int a[],int b)
{
	int i,end;
	for(i=0;a[i]!=0;i++)
	;
	end=i;
	for(i=0;i<end;i++)
	{
		if(i==b)
		{
			printf("%d",a[i]);
			break;
		}
		
	}
	if(b>=end)
	printf("NO");
	
}
