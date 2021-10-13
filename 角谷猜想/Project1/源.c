#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int function1(int a)
{
	printf("%d*3+1=%d\n", a, a * 3 + 1);
	return (a * 3 + 1);
}
int function2(int a)
{
	printf("%d/2=%d\n", a, a / 2);
	return (a / 2);
}
int main()
{
	int n=0;
	scanf("%d", &n);
	int ret = n;
	while (ret != 1) {
		if (ret % 2 != 0) {
			ret=function1(ret);
		}
		else {
			ret=function2(ret);
		}
	}
		printf("End");
	return 0;
}