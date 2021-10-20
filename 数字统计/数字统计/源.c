#define _CRT_SECURE_NO_WARNINGS 1
//统计某个给定范围[L, R]的所有整数中，数字2出现的次数。
//比如给定范围[2, 22]，数字2在数2中出现了1次，在数12中出现1次，在数20中出现1次，在数21中出现1次，在数22中出现2次
//所以数字2在该范围内一共出现了6次。
#include<stdio.h>
int main()
{
	int m = 0;
	int n = 0;
	scanf("%d %d", &m, &n);
	int sum = 0;
	while (m <= n) {
		int tmp = m;
		while (tmp > 0) {
			if (tmp % 10 == 2) {
				sum++;
			}
			tmp /= 10;
		}
		m++;
	}
	printf("%d", sum);
	return 0;
}