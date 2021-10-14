#define _CRT_SECURE_NO_WARNINGS 1
//给定若干个四位数，求出其中满足以下条件的数的个数：
//个位数上的数字减去千位数上的数字，再减去百位数上的数字， 再减去十位数上的数字的结果大于零。
//输入为两行，第一行为四位数的个数n，第二行为n个的四位数，数与数之间以一个空格分开。(n <= 100)
//输出为一行，包含一个整数，表示满足条件的四位数的个数。
#include<stdio.h>
int main()
{
	int n;
	scanf("%d", &n);
	int a[100] = { 0 };
	int i = 0;
	int count = 0;
	for (i = 0; i < n; i++) {
		scanf("%d", &a[i]);
	}
	for (i = 0; i < n; i++) {
		if (a[i] % 10 - a[i] / 1000 - a[i] / 100 % 10 - a[i] % 100 / 10 > 0) {
			count++;
		}
	}
	printf("%d", count);
	return 0;
}