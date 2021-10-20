#define _CRT_SECURE_NO_WARNINGS 1
//输入一行，包括四个参数：前两个参数为整数，依次代表矩形的高和宽（高不少于3行不多于10行，宽不少于5列不多于10列）
//第三个参数是一个字符，表示用来画图的矩形符号；第四个参数为1或0，0代表空心，1代表实心。
#include<stdio.h>
int main()
{
	int h = 0;//高
	int w = 0;//宽
	char a;//字符
	int flag = 0;//空心实心
	scanf("%d %d %c %d", &h, &w, &a, &flag);
	int i = 0;
	int j = 0;
	switch(flag){
	case 1:
		for (i = 1; i <= h; i++) {
			for (j = 1; j <= w; j++) {
				printf("%c", a);
			}
			printf("\n");
		}
		break;
	case 0:
		//先打印第一行
		for (i = 1; i <= w; i++) {
			printf("%c", a);
		}
		printf("\n");
		//打印中间部分
		for (i = 2; i < h; i++) {
			printf("%c", a);
			for (j = 2; j < w; j++) {
				printf(" ");
			}
			printf("%c\n", a);
		}
		//打印最后一行
		for (i = 1; i <= w; i++) {
			printf("%c", a);
		}
		break;
	default:
		break;
	}
	return 0;
}