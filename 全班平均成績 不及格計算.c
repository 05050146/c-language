#include <stdio.h>

int main(void)
{
	int num[80];
	int end,i,total=0,fail=0,max;// end�O�������}�C  
	double avg;//�������Z 
	
	
	for(i=0;i<80;i++)
	{
		scanf("%d",&num[i]);
		if(num[i]<0) //��J-1�����J���Z 
			break;
	}

	end=i;
	for (i=0;i<end;i++)
	{
		total+=num[i];//�[�` 
		if(max<num[i])//��X�̰����Z 
		max=i;
		if (num[i]<60)
		fail++;
	}
	avg = (double)total/end;
	printf("AVG=%.2f FAIL=%d\n�̰���=%d",avg,fail,num[max]);
	
	return 0;
}
