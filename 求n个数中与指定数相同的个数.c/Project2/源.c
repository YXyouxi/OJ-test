#define _CRT_SECURE_NO_WARNINGS 1
//�������2�У�
//��1��ΪN��m����ʾ�������еĳ���(N <= 100)��ָ�������֣� �м���һ���ո�ֿ���
//��2��ΪN������������֮����һ���ո�ֿ�
//���ΪN��������m��ͬ�����ĸ�����
#include<stdio.h>
int main()
{
	int N, m;
	scanf("%d %d", &N, &m);
	int a[105] = { 0 };
	int i = 0;
	int j = 0;
	int count = 0;
	for (i = 0; i < N; i++) {
		scanf("%d", &j);
		a[i] = j;
	}
	for (i = 0; i < N; i++) {
		if (a[i] == m) {
			count++;
		}
	}
	printf("%d", count);
	return 0;
}