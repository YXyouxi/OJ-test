#define _CRT_SECURE_NO_WARNINGS 1
//�������������� m �� k������1 < m < 100000��1 < k < 5 ���ж� m �ܷ�19��������ǡ�ú���k��3
//������������������YES���������NO��
#include<stdio.h>
int main()
{
	int m = 0;
	int k = 0;
	int count = 0;
	scanf("%d %d", &m, &k);
	if (m % 19 == 0) {
		while (m > 0) {
			int a = m % 10;
			m /= 10;
			if (a == 3) {
				count++;
			}
		}
		if (count == k) {
			printf("YES");
		}
		else {
			printf("NO");
		}
	}
	else {
		printf("NO");
	}
	return 0;
}