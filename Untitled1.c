#include <stdio.h>
int main (void)
{
	int a[]={1,3,5,7,9};
	
	int *p=a;
	
	printf("%d\n",++a[0]);//�L�X�}�C�����e��+1,�ҥH���׬O2 
	printf("%d\n" ,*p);//�L�X����p�}�C���Ĥ@�ӼƦr ,�ѩ󤺮e�w�g����,�ҥH���׬O2
	printf("%d\n",++*p);//�L�X����p�}�C���Ĥ@�ӼƦr+1,���׬O3
	printf("%d\n",*(p+2));//�L�X����p�}�C���ĤT�ӼƦr,���׬O5
	printf("%d\n",a[3]++);// ��X����p�}�C������4�ӼƦr,+1�����G�U�@��L�X,���׬O7 
	printf("%d\n",a[3]);//���׬O8 
	return 0;
}
