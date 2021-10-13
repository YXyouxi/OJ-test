#define _CRT_SECURE_NO_WARNINGS 1
//监护室每小时测量一次病人的血压，若收缩压在90 - 140之间并且舒张压在60 - 90之间（包含端点值）则称之为正常
//现给出某病人若干次测量的血压值，计算病人保持正常血压的最长小时数。
#include<stdio.h>
int main()
{
	int n;
	scanf("%d", &n);
	int a[100][2];
	int i = 0,j = 0;
	int count = 0;
	int max = 0;
	for (i = 0; i < n; i++) {
		for (j = 0; j < 2; j++) {
			scanf("%d", &a[i][j]);
		}
	}
	for (i = 0; i < n; i++) {
		if (a[i][0] >= 90 && a[i][0] <= 140 && a[i][1] >= 60 && a[i][1] <= 90) {
			count++;
			if (max < count) {
				max = count;
			}
		}
		else {
			count = 0;
		}
	}
	printf("%d", max);
	return 0;
}