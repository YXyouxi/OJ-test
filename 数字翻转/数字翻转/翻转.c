#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//����һ���������뽫��������λ�����ַ�ת�õ�һ��������
//����ҲӦ���������ĳ�����ʽ�������Ǹ�����ԭ��Ϊ�㣬����ת��õ������������λ���ֲ�ӦΪ��
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