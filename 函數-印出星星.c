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

/*�{���ݹF���H�U�n�D: 
�]�p�@�Ө��star(n)�A�Ө�ƥi�H�b�e���W�e�X�s��n�ӬP��(*)�C 

�{�������ŦX�U�C�n�D�G 
1. �{���Ĥ@�楲���[�W�t�{���W��,�Ǹ�,�m�W,�ΦҸդ�������� 
2. �{������J�ο�X���G�����ŦX�d�Ұ��浲�G 
3. ���o�ܧ�D�{�������e 

=== �D�{�� === 
int main(void) 
{          
    int n; 

    scanf("%d",&n);     
    star(n); 
    printf("OK\n"); 
     
    return 0; 
} 


=== ���浲�G(1) === 
4 
**** 
OK 

=== ���浲�G(1) === 
8 
******** 
OK*/

