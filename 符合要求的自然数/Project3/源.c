#define _CRT_SECURE_NO_WARNINGS 1
//一个十进制自然数,它的七进制与九进制表示都是三位数，且七进制与九进制的三位数码表示顺序正好相反。编程求此自然数,并输出显示。
#include<stdio.h>
int main()
{
	int i, j, k;
	int a[3] = { 0 };
	for (i = 1; i < 7; i++) {
		for (j = 0; j < 7; j++) {//中间这一位是从0开始的，而i和k由于分别充当7进制和9进制的首位，所以不能为0
			for (k = 1; k < 7; k++) {
				if (k + j * 7 + i * 49 == i+j*9+k*81) {//因为顺序相反，逆序求十进制，判断结果是否相等
					a[0] = k + j * 7 + i * 49;
					a[1] = i * 100 + j * 10 + k;
					a[2] = i + j * 10 + k * 100;
					goto out;
				}
			}
		}
	}
out:
	for (i = 0; i < 3; i++) {
		printf("%d\n", a[i]);
	}
	return 0;
}