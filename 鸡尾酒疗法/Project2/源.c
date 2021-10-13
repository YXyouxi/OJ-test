#define _CRT_SECURE_NO_WARNINGS 1
//假设鸡尾酒疗法的有效率为x，新疗法的有效率为y，如果y-x大于5%，则效果更好，如果x-y大于5%，则效果更差，否则称为效果差不多。
//下面给 出n组临床对照实验，其中第一组采用鸡尾酒疗法，其他n-1组为各种不同的改进疗法。请写程序判定各种改进疗法效果如何。
//输入
//第一行为整数n（ 1 < n <= 20）；
//其余n行每行两个整数，第一个整数是临床实验的总病例数(小于等于10000)，第二个疗效有效的病例数。
//这n行数据中，第一行为鸡尾酒疗法的数据，其余各行为各种改进疗法的数据。
//输出
//有n-1行输出，分别表示对应改进疗法的效果：
//如果效果更好，输出better；如果效果更差，输出worse；否则输出same
#include<stdio.h>
int main()
{
	int n;
	scanf("%d", &n);
	double a[25][2];
	int i = 0;
	int j = 0;
	double k = 0;
	for (i = 0; i < n; i++) {
		for (j = 0; j < 2; j++) {
			scanf("%lf", &k);
			a[i][j] = k;
		}
	}
	double n1 = 1.0*a[0][1] / a[0][0];
	for (i = 1; i < n; i++) {
		double n2 = 1.0*a[i][1] / a[i][0];
		if ((n2 - n1) > 0.05) {
			printf("better\n");
		}
		else if ((n1 - n2) > 0.05) {
			printf("worse\n");
		}
		else {
			printf("same\n");
		}
	}
	return 0;
}