#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//输入两行，第一行为整数n（1 <= n < 100），表示参加这次考试的人数
//第二行是这n个学生的成绩，相邻两个数之间用单个空格隔开。所有成绩均为0到100之间的整数。
//输出一个整数，即最高的成绩。
int main()
{
	unsigned int n;
	scanf("%u", &n);
	int a[100] = { 0 };
	int x = 0;
	int i = 0;
	for (i = 0; i < n; i++) {
		scanf("%d", &x);
		a[i] = x;
	}
	int max = a[0];
	for (i = 0; i < n; i++) {
		if (max < a[i]) {
			max = a[i];
		}
	}
	printf("%d", max);
	return 0;
}