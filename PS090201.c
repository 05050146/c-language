#include <stdio.h>
 int main(void)
{
	int a[20][2];
	int end,i,j,s;
	int fail[2];

	
	
	for(i=0;i<80;i++)
	{
		scanf("%d",&s);//s=�Ǹ� 
		if(s==0)
		break;
		scanf("%d %d",&a[i][0],&a[i][1]);
		
	}
 	end=i;//end=��J��ƪ����� 
 	
	for (i=0;i<end;i++)
	{
		for(j=0;j<2;j++)
		fail[j]+=a[i][j];//�[�` 
	
	}
	
	printf("AVG=%.2f %.2f",(double)fail[0]/end,(double)fail[1]/end);
	
	return 0;
}
