#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//����k��1< k < 100����������������ÿ�������Ǵ��ڵ���1��С�ڵ���10������
//д������������k���������У�1��5��10���ֵĴ�����
int main()
{
	int k = 0;
	scanf("%d", &k);
	int a[105] = { 0 };
	int i = 0;
	int j = 0;
	int count1 = 0, count5 = 0, count10 = 0;
	for (i = 0; i < k; i++) {
		scanf("%d", &j);
		a[i] = j;
	}
	for (i = 0; i < k; i++) {
		if (a[i] == 1) {
			count1++;
		}
		else if (a[i] == 5) {
			count5++;
		}
		else if (a[i] == 10) {
			count10++;
		}
	}
	printf("%d\n%d\n%d", count1, count5, count10);
	return 0;
}