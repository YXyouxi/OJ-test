#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//给定k（1< k < 100）个正整数，其中每个数都是大于等于1，小于等于10的数。
//写程序计算给定的k个正整数中，1，5和10出现的次数。
int main()
{
	int k = 0;
	scanf("%d", &k);
	int a[105] = { 0 };
	int i = 0;
	int j = 0;
	int count1 = 0, count5 = 0, count10 = 0;
	for (i = 0; i < k; i++) {
		scanf("%d", &j);
		a[i] = j;
	}
	for (i = 0; i < k; i++) {
		if (a[i] == 1) {
			count1++;
		}
		else if (a[i] == 5) {
			count5++;
		}
		else if (a[i] == 10) {
			count10++;
		}
	}
	printf("%d\n%d\n%d", count1, count5, count10);
	return 0;
}