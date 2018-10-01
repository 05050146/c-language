#include <stdio.h>

int star(int n);
int main (void)

{
	int n; 

    scanf("%d",&n);     
    star(n); 
    printf("OK\n"); 
     
    return 0; 
} 
	
int star(int n)
{
	int i;
	for (i=0;i<n;i++)
	printf("*");
	printf("\n");
	return 0;
}

/*程式需達成以下要求: 
設計一個函數star(n)，該函數可以在畫面上畫出連續n個星號(*)。 

程式必須符合下列要求： 
1. 程式第一行必須加上含程式名稱,學號,姓名,及考試日期的註解 
2. 程式之輸入及輸出結果必須符合範例執行結果 
3. 不得變更主程式的內容 

=== 主程式 === 
int main(void) 
{          
    int n; 

    scanf("%d",&n);     
    star(n); 
    printf("OK\n"); 
     
    return 0; 
} 


=== 執行結果(1) === 
4 
**** 
OK 

=== 執行結果(1) === 
8 
******** 
OK*/

