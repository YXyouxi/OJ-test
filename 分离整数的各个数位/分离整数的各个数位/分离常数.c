#define _CRT_SECURE_NO_WARNINGS 1
//����һ��������Ҫ��Ӹ�λ��ʼ���������ÿһλ���֡�
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