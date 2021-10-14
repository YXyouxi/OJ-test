#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//给定一个整数，请将该数各个位上数字反转得到一个新数。
//新数也应满足整数的常见形式，即除非给定的原数为零，否则反转后得到的新数的最高位数字不应为零
int main()
{
	long long int n;
	scanf("%lld", &n);
	int sum = 0;
	while (n != 0) {
		sum *= 10;
		sum += n % 10;
		n /= 10;
	}
	printf("%d", sum);
	return 0;
}