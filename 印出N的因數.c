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
/*�{�������ŦX�U�C�n�D�G 
1. �{���Ĥ@�楲���[�W�t�{���W��,�Ǹ�,�m�W,�ΦҸդ�������� 
2. �{������J�ο�X���G�����ŦX�d�Ұ��浲�G  

=== �d�Ұ��浲�G(1) === 
36 <-- �q��L��J36[Enter] 
ANS=1 2 3 4 6 9 12 18 36 
  
=== �d�Ұ��浲�G(2) === 
45 <-- �q��L��J45[Enter] 
ANS=1 3 5 9 15 45 
 */
