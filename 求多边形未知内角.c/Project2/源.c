#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//在欧几里德几何中，n边形的内角和是(n-2)*180°。
//已知其中(n-1)个内角的度数，就能计算出剩下的一个未知内角的度数。请编写一个程序，来解决这个问题。
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