#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//һ��2�У���һ��Ϊ���еĸ���n��1 <= n <= 1000)���ڶ���Ϊ���е�n��������1000�ķǸ�����������֮����һ���ո�ָ���
//���һ�У���ʾ���е������ֵ��
int main()
{
	int n;
	scanf("%d", &n);//���и���
	int a[1005] = { 0 };
	int i = 0;
	int j = 0;
	for (i = 0; i < n; i++) {
		scanf("%d", &j);
		a[i] = j;
	}
	int max = a[0];
	int min = a[0];
	//���ֵ
	for (i = 0; i < n; i++) {
		if (max < a[i]) {
			max = a[i];
		}
	}
	//��Сֵ
	for (i = 0; i < n; i++) {
		if (min > a[i]) {
			min = a[i];
		}
	}
	printf("%d", max - min);
	return 0;
}