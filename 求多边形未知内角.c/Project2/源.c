#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//��ŷ����¼����У�n���ε��ڽǺ���(n-2)*180�㡣
//��֪����(n-1)���ڽǵĶ��������ܼ����ʣ�µ�һ��δ֪�ڽǵĶ��������дһ�����������������⡣
int main()
{
	int n;
	scanf("%d", &n);
	int sum = (n - 2) * 180;
	int a[1000];
	int i = 0;
	int angle = 0;
	for (i = 0; i < n-1; i++) {
		scanf("%d", &angle);
		a[i] = angle;
		sum -= a[i];
	}
	printf("%d", sum);
	return 0;
}