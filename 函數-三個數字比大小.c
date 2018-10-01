#include <stdio.h>

int afunc (int n1,int n2,int n3);
int main(void) 
{ 
    int n1,n2,n3; 
     
    scanf("%d%d%d",&n1,&n2,&n3); 
    printf("MAX=%d\n",afunc(n1,n2,n3)); 
     
    return 0; 
} 
int afunc (int n1,int n2,int n3)
{
	if (n1>n2)
	 {
	 	if(n1>n3)
	 		return n1;
	 	else 
		 	return n3;
	 	
	 }
	else
	 {
	 	if(n2>n3)
	 		return n2;
	 	else
	 		return n3;
	 }
	
}


/*程式必須符合下列要求： 
1. 程式第一行必須加上含程式名稱,學號,姓名,及考試日期的註解 
2. 程式之輸入及輸出結果必須符合範例執行結果 
3. 不得變更主程式的內容 

=== 主程式 === 
int main(void) 
{ 
    int n1,n2,n3; 
     
    scanf("%d%d%d",&n1,&n2,&n3); 
    printf("MAX=%d\n",afunc(n1,n2,n3)); 
     
    return 0; 
} 

=== 執行結果(1) === 
1 2 3 
MAX=3 

=== 執行結果(2) === 
9 6 3 
MAX=9 

=== 執行結果(3) === 
11 33 22 
MAX=33 
*/
