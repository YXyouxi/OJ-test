#define _CRT_SECURE_NO_WARNINGS 1
//已知正整数 n 是两个不同的质数的乘积，试求出较大的那个质数
#include<stdio.h>
int main()
{
	int n = 0;
	scanf("%d", &n);
	int i = 2;
	int ret = 0;
	for (i = 2; i <n; i++) {
		if (n % i == 0) {
			ret = i;//求出一个因子
			i = n / ret;//相除就是另一个因子
			break;
		}
	}
	if (i > ret) {
		printf("%d", i);
	}
	else {
		printf("%d", ret);
	}
	return 0;
}