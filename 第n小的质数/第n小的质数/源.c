#define _CRT_SECURE_NO_WARNINGS 1
//����һ��������n�����nС��������
#include<stdio.h>
#include<math.h>
int main()
{
	int n = 0;
	scanf("%d", &n);
	int arr[10000] = { 2 };//�洢ǰ10000������
	int i = 3;
	int j = 0;
	int k = 1;
	int isPrime = 1;//�ж��ǲ�������
	for (k = 1; k < 10000; ) {
		//�ж��ܷ�ĳ��������
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