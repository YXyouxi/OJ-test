#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//����n��1�У���1����A�����������Ŀ������n�����n�У�ÿһ���Ǹù�ĳһ���õĽ�����ͭ����Ŀ����һ���ո�ֿ���
//���1�У�����4��������ΪA������õĽ�����ͭ���������ܽ���������һ���ո�ֿ���
int main() 
{
	int n;
	scanf("%d", &n);
	int a[20][20];
	int i, j;
	int k = 0;
	for (i = 0; i < n; i++) {
		for (j = 0; j < 3; j++) {
			scanf("%d", &k);
			a[i][j] = k;
		}
	}
	int gold=0, sliver=0, bronze=0;
	for (i = 0; i < n; i++) {
		gold += a[i][0];
		sliver += a[i][1];
		bronze += a[i][2];
	}
	int sum = gold + sliver + bronze;
	printf("%d %d %d %d", gold, sliver, bronze, sum);
	return 0;
}