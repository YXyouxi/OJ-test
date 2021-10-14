#define _CRT_SECURE_NO_WARNINGS 1
//给定一个整数，要求从个位开始分离出它的每一位数字。
#include<stdio.h>
int main()
{
	int n;
	scanf("%d", &n);
	int i = 1;
	for (; n > 0;) {
		printf("%d", n % 10);
		if (n > 9) {
			printf(" ");
		}
		n /= 10;
	}
	return 0;
}