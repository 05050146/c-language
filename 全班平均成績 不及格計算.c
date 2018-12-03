#include <stdio.h>

int main(void)
{
	int num[80];
	int end,i,total=0,fail=0,max;// end是停止的那格陣列  
	double avg;//平均成績 
	
	
	for(i=0;i<80;i++)
	{
		scanf("%d",&num[i]);
		if(num[i]<0) //輸入-1停止輸入成績 
			break;
	}

	end=i;
	for (i=0;i<end;i++)
	{
		total+=num[i];//加總 
		if(max<num[i])//找出最高成績 
		max=i;
		if (num[i]<60)
		fail++;
	}
	avg = (double)total/end;
	printf("AVG=%.2f FAIL=%d\n最高分=%d",avg,fail,num[max]);
	
	return 0;
}
