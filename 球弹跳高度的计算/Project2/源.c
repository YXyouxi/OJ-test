#define _CRT_SECURE_NO_WARNINGS 1
//一球从某一高度落下（整数，单位米），每次落地后反跳回原来高度的一半，再落下。
//编程计算气球在第10次落地时，共经过多少米 ? 第10次反弹多高？
#include<stdio.h>
int main()
{
	double n;
	scanf("%lf", &n);
	double sum = 0;
	double ret = 0;
	int i = 0;
	for (i = 0; i < 10; i++) {
		sum += n;
		n /= 2;
		if (i < 9) {
			sum += n;
		}
	}
	printf("%g %g", sum, n);
	return 0;
}