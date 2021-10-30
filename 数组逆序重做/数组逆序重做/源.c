#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
void reverse(int* left, int sz)
{
	int* right = left + sz - 1;
	while (left < right) {
		int tmp = *left;
		*left = *right;
		*right = tmp;
		left++;
		right--;
	}
}
int main()
{
	int n = 0;
	int arr[100] = { 0 };
	int i = 0;
	scanf("%d", &n);
	for (i = 0; i < n; i++) {
		scanf("%d", &arr[i]);
	}
	reverse(arr, n);
	for (i = 0; i < n; i++) {
		printf("%d ", arr[i]);
	}
	return 0;
}