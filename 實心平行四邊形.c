#include <stdio.h>
int main (void)
{
	int a,b,c,d;   
	
	scanf("%d",&a);    /*块计a*/
	
	for (b=1;b<=a;b++)    /*b眖1秨﹍,︽计*/
	{
		for(c=0;c<=a-b;c++)    /*c眖0秨﹍,材︽程,繦︽计患搭*/
		{
			printf(" ");
		}
		for(d=1;d<=a;d++)   /*d眖1秨﹍,–︽常妓计秖琍琍*/ 
		{
			printf("*");
		}
		
		printf("\n");
	}
	return 0;
}
