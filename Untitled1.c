#include <stdio.h>
int main (void)
{
	int a[]={1,3,5,7,9};
	
	int *p=a;
	
	printf("%d\n",++a[0]);//印出陣列中內容並+1,所以答案是2 
	printf("%d\n" ,*p);//印出指標p陣列的第一個數字 ,由於內容已經改變,所以答案是2
	printf("%d\n",++*p);//印出指標p陣列的第一個數字+1,答案是3
	printf("%d\n",*(p+2));//印出指標p陣列的第三個數字,答案是5
	printf("%d\n",a[3]++);// 找出指標p陣列中的第4個數字,+1的結果下一行印出,答案是7 
	printf("%d\n",a[3]);//答案是8 
	return 0;
}
