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


/*�{�������ŦX�U�C�n�D�G 
1. �{���Ĥ@�楲���[�W�t�{���W��,�Ǹ�,�m�W,�ΦҸդ�������� 
2. �{������J�ο�X���G�����ŦX�d�Ұ��浲�G 
3. ���o�ܧ�D�{�������e 

=== �D�{�� === 
int main(void) 
{ 
    int n1,n2,n3; 
     
    scanf("%d%d%d",&n1,&n2,&n3); 
    printf("MAX=%d\n",afunc(n1,n2,n3)); 
     
    return 0; 
} 

=== ���浲�G(1) === 
1 2 3 
MAX=3 

=== ���浲�G(2) === 
9 6 3 
MAX=9 

=== ���浲�G(3) === 
11 33 22 
MAX=33 
*/
