#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//�������У���һ��Ϊ����n��1 <= n < 100������ʾ�μ���ο��Ե�����
//�ڶ�������n��ѧ���ĳɼ�������������֮���õ����ո���������гɼ���Ϊ0��100֮���������
//���һ������������ߵĳɼ���
int main()
{
	unsigned int n;
	scanf("%u", &n);
	int a[100] = { 0 };
	int x = 0;
	int i = 0;
	for (i = 0; i < n; i++) {
		scanf("%d", &x);
		a[i] = x;
	}
	int max = a[0];
	for (i = 0; i < n; i++) {
		if (max < a[i]) {
			max = a[i];
		}
	}
	printf("%d", max);
	return 0;
}