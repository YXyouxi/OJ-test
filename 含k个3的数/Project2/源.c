#define _CRT_SECURE_NO_WARNINGS 1
//输入两个正整数 m 和 k，其中1 < m < 100000，1 < k < 5 ，判断 m 能否被19整除，且恰好含有k个3
//如果满足条件，则输出YES，否则，输出NO。
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