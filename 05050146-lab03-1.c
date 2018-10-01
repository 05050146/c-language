#include <stdio.h>
int main (void)
{
	float num1,num2,num3;
	scanf("%f%f%f",&num1,&num2,&num3);
	
	printf("%07.2f\n%+07.2f\n%6.3f",num1,num2,num3);
	return 0; 
}
