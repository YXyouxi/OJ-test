#define _CRT_SECURE_NO_WARNINGS 1
//��֪��Sn= 1��1��2��1��3������1��n����Ȼ��������һ������K����n�㹻���ʱ��Sn����K��
//�ָ���һ������K��1 <= k <= 15����Ҫ������һ����С��n��ʹ��Sn��K��
#include<stdio.h>
int main()
{
	int k, i;
	double sum =0;
	scanf("%d", &k);
	for (i = 1;; i++) {
		sum = sum + 1.0 / i;
		if (sum > k) {
			break;
		}
	}
	printf("%d", i);
	return 0;
}