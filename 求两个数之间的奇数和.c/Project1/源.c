#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//计算非负整数 m 到 n（包括m 和 n ）之间的所有奇数的和
//其中，m 不大于 n，且n 不大于300。例如 m=3, n=12, 其和则为：3+5+7+9+11=35。
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