#define _CRT_SECURE_NO_WARNINGS 1
//书费目录：计算概论 28.9 元/本
//数据结构与算法 32.7 元 / 本
//数字逻辑 45.6元 / 本
//C++程序设计教程 78 元 / 本
//人工智能 35 元 / 本
//计算机体系结构 86.2 元 / 本
//编译原理 27.8元 / 本
//操作系统 43 元 / 本
//计算机网络 56 元 / 本
//JAVA程序设计 65 元 / 本
#include<stdio.h>
int main()
{
	int number[10] = { 0 };
	int i = 0;
	for (i = 0; i < 10; i++) {
		scanf("%d", &number[i]);
	}
	printf("%.1lf", 28.9 * number[0] + 32.7 * number[1] + 45.6 * number[2] + 78.0 * number[3] +
		35.0 * number[4] + 86.2 * number[5] + 27.8 * number[6] + 43.0 * number[7] +
		56.0 * number[8] + 65.0 * number[9]);
	return 0;
}