#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//����Ǹ����� m �� n������m �� n ��֮������������ĺ�
//���У�m ������ n����n ������300������ m=3, n=12, �����Ϊ��3+5+7+9+11=35��
int main()
{
	int m = 0, n = 0;
	scanf("%d %d", &m, &n);
	int i = m;
	int sum = 0;
	for (i = m; i <= n; i++) {
		if (i % 2 != 0) {
			sum += i;
		}
	}
	printf("%d", sum);
	return 0;
}