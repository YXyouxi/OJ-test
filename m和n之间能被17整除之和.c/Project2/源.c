#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//�������� m �� n ֮�䣨���� m �� n���ܱ� 17 ���������ۼӡ����У�0 < m < n < 1000��
int main()
{
	int m = 0, n = 0;
	scanf("%d %d", &m, &n);
	int i = m;
	int sum = 0;
	for (i = m; i <= n; i++) {
		if (i % 17 == 0) {
			sum += i;
		}
	}
	printf("%d", sum);
	return 0;
}