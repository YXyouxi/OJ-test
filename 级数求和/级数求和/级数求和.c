#define _CRT_SECURE_NO_WARNINGS 1
//已知：Sn= 1＋1／2＋1／3＋…＋1／n。显然对于任意一个整数K，当n足够大的时候，Sn大于K。
//现给出一个整数K（1 <= k <= 15），要求计算出一个最小的n；使得Sn＞K。
#include<stdio.h>
int main()
{
	int k, i;
	double sum =0;
	scanf("%d", &k);
	for (i = 1;; i++) {
		sum = sum + 1.0 / i;
		if (sum > k) {
			break;
		}
	}
	printf("%d", i);
	return 0;
}