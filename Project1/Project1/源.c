#define _CRT_SECURE_NO_WARNINGS 1
//�໤��ÿСʱ����һ�β��˵�Ѫѹ��������ѹ��90 - 140֮�䲢������ѹ��60 - 90֮�䣨�����˵�ֵ�����֮Ϊ����
//�ָ���ĳ�������ɴβ�����Ѫѹֵ�����㲡�˱�������Ѫѹ���Сʱ����
#include<stdio.h>
int main()
{
	int n;
	scanf("%d", &n);
	int a[100][2];
	int i = 0,j = 0;
	int count = 0;
	int max = 0;
	for (i = 0; i < n; i++) {
		for (j = 0; j < 2; j++) {
			scanf("%d", &a[i][j]);
		}
	}
	for (i = 0; i < n; i++) {
		if (a[i][0] >= 90 && a[i][0] <= 140 && a[i][1] >= 60 && a[i][1] <= 90) {
			count++;
			if (max < count) {
				max = count;
			}
		}
		else {
			count = 0;
		}
	}
	printf("%d", max);
	return 0;
}