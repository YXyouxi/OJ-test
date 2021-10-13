#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//一共2行，第一行为序列的个数n（1 <= n <= 1000)，第二行为序列的n个不超过1000的非负整数，整数之间以一个空格分隔。
//输出一行，表示序列的最大跨度值。
int main()
{
	int n;
	scanf("%d", &n);//序列个数
	int a[1005] = { 0 };
	int i = 0;
	int j = 0;
	for (i = 0; i < n; i++) {
		scanf("%d", &j);
		a[i] = j;
	}
	int max = a[0];
	int min = a[0];
	//最大值
	for (i = 0; i < n; i++) {
		if (max < a[i]) {
			max = a[i];
		}
	}
	//最小值
	for (i = 0; i < n; i++) {
		if (min > a[i]) {
			min = a[i];
		}
	}
	printf("%d", max - min);
	return 0;
}