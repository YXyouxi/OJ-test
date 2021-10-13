#define _CRT_SECURE_NO_WARNINGS 1
//救生船从大本营出发，营救若干屋顶上的人回到大本营，屋顶数目以及每个屋顶的坐标
//和人数都将由输入决定，求出所有人都到达大本营并登陆所用的时间。
//船行驶速度为50m/min，原路返回，每人上船1min，下船0.5min。
#include<stdio.h>
#include<math.h>
int main()
{
	int n;
	scanf("%d", &n);
	double a[100][3];
	int i = 0, j = 0;
	double k = 0;
	double sum = 0;
	for (i = 0; i < n; i++) {
		for (j = 0; j < 3; j++) {
			scanf("%lf", &k);
			a[i][j] = k;
		}
	}
	for (i = 0; i < n; i++) {
		double ret = sqrt(1.0 * a[i][0] * a[i][0] + 1.0 * a[i][1] * a[i][1]);//求距离
		double time = a[i][2] * 1.0 + 2.0 * ret / 50 + 0.5 * a[i][2];//求时间
		sum += time;
	}
	printf("%.0f", ceil(sum));
	return 0;
}