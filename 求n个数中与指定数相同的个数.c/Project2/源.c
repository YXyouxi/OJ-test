#define _CRT_SECURE_NO_WARNINGS 1
//输入包含2行：
//第1行为N和m，表示整数序列的长度(N <= 100)和指定的数字， 中间用一个空格分开；
//第2行为N个整数，整数之间以一个空格分开
//输出为N个数中与m相同的数的个数。
#include<stdio.h>
int main()
{
	int N, m;
	scanf("%d %d", &N, &m);
	int a[105] = { 0 };
	int i = 0;
	int j = 0;
	int count = 0;
	for (i = 0; i < N; i++) {
		scanf("%d", &j);
		a[i] = j;
	}
	for (i = 0; i < N; i++) {
		if (a[i] == m) {
			count++;
		}
	}
	printf("%d", count);
	return 0;
}