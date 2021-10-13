#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
long long int function1(long long int a)
{
	printf("%lld*3+1=%lld\n", a, a * 3 + 1);
	return (a * 3 + 1);
}
long long int function2(long long int a)
{
	printf("%lld/2=%lld\n", a, a / 2);
	return (a / 2);
}
int main()
{
	long long int n=0;
	scanf("%lld", &n);
	while (n > 1) {
		if (n % 2 != 0) {
			n=function1( n);
		}
		else {
			n=function2( n);
		}
	}
		printf("End");
	return 0;
}