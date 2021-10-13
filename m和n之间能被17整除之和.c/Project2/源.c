#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//将正整数 m 和 n 之间（包括 m 和 n）能被 17 整除的数累加。其中，0 < m < n < 1000。
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