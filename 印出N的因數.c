#include <stdio.h>
int main (void)

{
	int i,n,a;

	scanf("%d",&i);
	printf("ANS=");
	
	for	(n=1;n<=i;n++)
	{
		if(i%n==0)
			printf("%d ",n);
	}
	
	
	
	return 0;
}
/*程式必須符合下列要求： 
1. 程式第一行必須加上含程式名稱,學號,姓名,及考試日期的註解 
2. 程式之輸入及輸出結果必須符合範例執行結果  

=== 範例執行結果(1) === 
36 <-- 從鍵盤輸入36[Enter] 
ANS=1 2 3 4 6 9 12 18 36 
  
=== 範例執行結果(2) === 
45 <-- 從鍵盤輸入45[Enter] 
ANS=1 3 5 9 15 45 
 */
