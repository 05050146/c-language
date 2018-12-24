#include <stdio.h>
int sum(int a[][3],int stuid);
int main(void) 
{ 
    int a[80][3]; 
    int i,j,stuid; 
         
    for (i=0;i<80;i++) 
    { 
        scanf("%d",&a[i][0]); 
        if (a[i][0]==0) 
           break; 
        for (j=1;j<=2;j++) 
            scanf("%d",&a[i][j]); 
    } 
     
    scanf("%d",&stuid); 
    printf("%d=%d",stuid,sum(a,stuid)); 
    return 0; 
} 
int sum(int a[][3],int stuid)
{
	int i,j=1,end=0;
	
	for(i=0;a[i][0]!=0;i++)
	{
		if(a[i][0]==stuid)
		{
			end=a[i][1]+a[i][2];
			return end;
		}
		
	}
		if(end==0)
		return -1;

}
