#include <stdio.h>
 int main(void)
{
	int a[20][2];
	int end,i,j,s,pass;
	int fail[2]={0};

	
	
	for(i=0;i<80;i++)
	{
		scanf("%d",&s);//s=¾Ç¸¹ 
		if(s==0)
		break;
		scanf("%d %d",&a[i][0],&a[i][1]);
		
	}
 	end=i;
 	scanf("%d",&pass);
	for (i=0;i<end;i++)
	{
		for(j=0;j<2;j++)
		if(a[i][j]<pass) 
		fail[j]++;
	
	}
	
	printf("FAIL=%d %d",fail[0],fail[1]);
	
	return 0;
}
