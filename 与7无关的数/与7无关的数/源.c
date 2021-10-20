#define _CRT_SECURE_NO_WARNINGS 1
//一个正整数,如果它能被7整除,或者它的十进制表示法中某一位上的数字为7,则称其为与7相关的数
//现求所有小于等于n(n < 100)的与7无关的正整数的平方和.
#include<stdio.h>
int main()
{
	int n = 0;
	scanf("%d", &n);
	int i = 0;
	int j = 0;
	int sum = 0;
	int flag = 1;//判断是否符合题目要求
	//遍历1到n
	for (i = 1; i <= n; i++) {
		//先判断能否被7整除
		if (i % 7 != 0) {
			int tmp = i;
			//判断每一位是否都不是7
			for(;tmp>0;){
				if (tmp % 10 != 7) {
					tmp /= 10;
				}
				else {
					flag = 0;
					break;
				}
			}
			if (flag == 1) {
				sum = sum + i * i;
			}
			flag = 1;
		}
	}
	printf("%d", sum);
	return 0;
}