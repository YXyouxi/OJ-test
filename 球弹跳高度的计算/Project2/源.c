#define _CRT_SECURE_NO_WARNINGS 1
//һ���ĳһ�߶����£���������λ�ף���ÿ����غ�����ԭ���߶ȵ�һ�룬�����¡�
//��̼��������ڵ�10�����ʱ�������������� ? ��10�η�����ߣ�
#include<stdio.h>
int main()
{
	double n;
	scanf("%lf", &n);
	double sum = 0;
	double ret = 0;
	int i = 0;
	for (i = 0; i < 10; i++) {
		sum += n;
		n /= 2;
		if (i < 9) {
			sum += n;
		}
	}
	printf("%g %g", sum, n);
	return 0;
}