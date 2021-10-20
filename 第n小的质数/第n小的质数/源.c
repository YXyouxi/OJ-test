#define _CRT_SECURE_NO_WARNINGS 1
//输入一个正整数n，求第n小的质数。
#include<stdio.h>
#include<math.h>
int main()
{
	int n = 0;
	scanf("%d", &n);
	int arr[10000] = { 2 };//存储前10000个质数
	int i = 3;
	int j = 0;
	int k = 1;
	int isPrime = 1;//判断是不是质数
	for (k = 1; k < 10000; ) {
		//判断能否被某个数整除
		for (j = 2; j <= sqrt(i); j++) {
			if (i % j == 0) {
				isPrime = 0;
			}
		}
		if (isPrime == 1) {
			arr[k] = i;
			k++;
		}
		isPrime = 1;
		i++;
	}
	printf("%d", arr[n-1]);
	return 0;
}