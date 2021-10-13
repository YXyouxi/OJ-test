#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//输入n＋1行，第1行是A国参与决赛项目的天数n，其后n行，每一行是该国某一天获得的金、银、铜牌数目，以一个空格分开。
//输出1行，包括4个整数，为A国所获得的金、银、铜牌总数及总奖牌数，以一个空格分开。
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