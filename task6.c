#include <stdio.h>

/*
*������� 2.
*������� �ணࠬ�� ⠪�� ��ࠧ��, �⮡� ��� ���� ���祭��
	����� ����। �ᯮ�짮����� 横� while.
*/

int main()
{

	int mlen = 6;		// �᫮ ������⮢ ���ᨢ�
	int a[mlen];		// ��� ���ᨢ
	int i;				// ���稪 横��

    /* ����� ���짮��⥫� ���᪠��� */
        printf("��������, ������ %i 楫�� �ᥫ:\n" , mlen);

    /* ⥯��� ����稬 �� ���� 6 �ᥫ */

        for(i = 0; i < mlen; i++)
        {
            printf("������ %d-� �᫮: ", i + 1);		// %d � ��, �� � %i
            scanf("%i", &a[i]);
        }

        i = mlen;
        while (i > 0)
        {
            printf("%i ", a[i - 1]);
            i--;
        }

	printf("\n");

	return 0;
}