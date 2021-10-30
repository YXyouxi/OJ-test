#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int arr[10] = { 0 };
	int i = 0;
	for (i = 0; i < 10; i++) {
		scanf("%d", &arr[i]);
	}
	int h = 0;
	scanf("%d", &h);
	int count = 0;
	for (i = 0; i < 10; i++) {
		if (h >= arr[i]) {
			count++;
		}
		else if ((h + 30) >= arr[i]) {
			count++;
		}
	}
	printf("%d", count);
	return 0;
}