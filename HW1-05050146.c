/*05050146 �q�q�G�A  �\�� */
/*2017/10/18*/
/*�H������20�ӼƦr,�Ѥp�ƨ�j,�A��J�Ʀr�Y�����h��X�ӼƦr��}�C�������ޭ�,�Y�����h��X-1��*/
#include <stdio.h> 
#include <math.h>
#define SWAP(x, y, t) ((t) = (x), (x) = (y), (y) = (t))//��m�洫
#define COMPARE(x,y) ((x)<(y))?-1:((x)==(y))?0:1//�P�_ 

int binsearch(int list[], int searchnum ,int left, int right);//��ƫŧi
void sort(int [], int );
int main(void)
{
	int i,n=20,searchnum;////�ŧi�T���ܼ� 
	int list[20];//�ŧi�@�ӪŶ���20���}�C  
	for(i=0;i<n;i++)//�i�J�j�� 
		{
			list[i]=rand()%100;//�H���Ʀr 0~100
			printf("%d ",list[i]);//�L�X�}�C 
		}
	sort(list,n);//�i�Jsort���
	
	printf("\nSorted array:\n");
	for(i=0;i<n;i++)//�i�J�j�� 
		printf("%d ",list[i]);//�L�X�}�C 
	
	printf("\n");
	
	scanf("%d",&searchnum);//��J�A�ҭn�j�M���Ʀr 
	binsearch(list,searchnum,0,n-1);//�i�J�禡 binsearch
	printf("%d",binsearch(list,searchnum,0,n-1));//�L�X�ҷj�M�쪺�Ʀr 
	
	return 0;
}
void sort(int list[], int n)
{
	int i,j,min,temp;//�ŧi4�Ӿ���ܼ� 
	for(i=0;i<n-1;i++)//�j�� 
	{
		min=i;
		for(j=i+1;j<n;j++)//�j�� 
			if(list[j]<list[min])//�P�_list[j]��list[min]���j�p 
				min=j;//j��min�x�s 
				
		SWAP(list[i],list[min],temp);//�i�JSWAP 
	}
}

int binsearch(int list[], int searchnum ,int left, int right)
{
	int middle;//�ŧi�@���ܼ� 
	if(left<=right)//�P�_�����޻P�k���ެO�_����e 
	{
		middle=(left+right)/2;//��X�}�C�������ȵ��ܼ�middle�x�s 
		switch(COMPARE(list[middle], searchnum))//�P�_ 
		{
			case -1:return binsearch(list,searchnum,middle+1,right);//�p�G���󦨥ߤ����ȩ��k���ʤ@��
			case 0:return middle;//�p�G���󦨥ߦ^�Ǥ����� 
			case 1:return binsearch(list,searchnum,left,middle-1);//�p�G���󦨥ߤ����ȩ������ʤ@��
		}
	}
	return -1;//�������ߦ^��-1 
}
