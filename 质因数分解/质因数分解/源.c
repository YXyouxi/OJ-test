#define _CRT_SECURE_NO_WARNINGS 1
//��֪������ n ��������ͬ�������ĳ˻���������ϴ���Ǹ�����
#include<stdio.h>
int main()
{
	int n = 0;
	scanf("%d", &n);
	int i = 2;
	int ret = 0;
	for (i = 2; i <n; i++) {
		if (n % i == 0) {
			ret = i;//���һ������
			i = n / ret;//���������һ������
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