/*05050146 電通二乙  許揚 */gg
/*2017/10/18*/
/*隨機產生20個數字,由小排到大,再輸入數字若有找到則輸出該數字於陣列中的索引值,若未找到則輸出-1值*/
#include <stdio.h> 
#include <math.h>
#define SWAP(x, y, t) ((t) = (x), (x) = (y), (y) = (t))//位置交換
#define COMPARE(x,y) ((x)<(y))?-1:((x)==(y))?0:1//判斷 

int binsearch(int list[], int searchnum ,int left, int right);//函數宣告
void sort(int [], int );
int main(void)
{
	int i,n=20,searchnum;////宣告三個變數 
	int list[20];//宣告一個空間為20的陣列  
	for(i=0;i<n;i++)//進入迴圈 
		{
			list[i]=rand()%100;//隨機數字 0~100
			printf("%d ",list[i]);//印出陣列 
		}
	sort(list,n);//進入sort函數
	
	printf("\nSorted array:\n");
	for(i=0;i<n;i++)//進入迴圈 
		printf("%d ",list[i]);//印出陣列 
	
	printf("\n");
	
	scanf("%d",&searchnum);//輸入你所要搜尋的數字 
	binsearch(list,searchnum,0,n-1);//進入函式 binsearch
	printf("%d",binsearch(list,searchnum,0,n-1));//印出所搜尋到的數字 
	
	return 0;
}
void sort(int list[], int n)
{
	int i,j,min,temp;//宣告4個整數變數 
	for(i=0;i<n-1;i++)//迴圈 
	{
		min=i;
		for(j=i+1;j<n;j++)//迴圈 
			if(list[j]<list[min])//判斷list[j]跟list[min]的大小 
				min=j;//j給min儲存 
				
		SWAP(list[i],list[min],temp);//進入SWAP 
	}
}

int binsearch(int list[], int searchnum ,int left, int right)
{
	int middle;//宣告一個變數 
	if(left<=right)//判斷左索引與右索引是否有交叉 
	{
		middle=(left+right)/2;//算出陣列的中間值給變數middle儲存 
		switch(COMPARE(list[middle], searchnum))//判斷 
		{
			case -1:return binsearch(list,searchnum,middle+1,right);//如果條件成立中間值往右移動一格
			case 0:return middle;//如果條件成立回傳中間值 
			case 1:return binsearch(list,searchnum,left,middle-1);//如果條件成立中間值往左移動一格
		}
	}
	return -1;//都不成立回傳-1 
}
