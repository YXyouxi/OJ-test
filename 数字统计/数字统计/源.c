#define _CRT_SECURE_NO_WARNINGS 1
//ͳ��ĳ��������Χ[L, R]�����������У�����2���ֵĴ�����
//���������Χ[2, 22]������2����2�г�����1�Σ�����12�г���1�Σ�����20�г���1�Σ�����21�г���1�Σ�����22�г���2��
//��������2�ڸ÷�Χ��һ��������6�Ρ�
#include<stdio.h>
int main()
{
	int m = 0;
	int n = 0;
	scanf("%d %d", &m, &n);
	int sum = 0;
	while (m <= n) {
		int tmp = m;
		while (tmp > 0) {
			if (tmp % 10 == 2) {
				sum++;
			}
			tmp /= 10;
		}
		m++;
	}
	printf("%d", sum);
	return 0;
}