#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//某程序员开始工作，年薪N万，他希望在中关村公馆买一套60平米的房子，现在价格是200万
//假设房子价格以每年百分之K增长，并且该程序员未来年薪不变，且不吃不喝，不用交税
//每年所得N万全都积攒起来，问第几年能够买下这套房子？（第一年年薪N万，房价200万）
//如果在第20年或者之前就能买下这套房子，则输出一个整数M，表示最早需要在第M年能买下，否则输出Impossible。
int main()
{
	int N, K;
	scanf("%d %d", &N, &K);
	int sum = N;
	double price = 200;
	int i = 0;
	if (N >= 200) {
		printf("1");
		goto out;
	}
	for (i = 2; i <= 20; i++) {
		sum += N;
		price = (1 + 0.01 * K) * price;
		if (sum >= price) {
			printf("%d", i);
			break;
		}
	}
	if (sum < price) {
		printf("Impossible");
	}
	out:
	return 0;
}