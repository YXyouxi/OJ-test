#define _CRT_SECURE_NO_WARNINGS 1
//�������Ӵ�Ӫ������Ӫ�������ݶ��ϵ��˻ص���Ӫ���ݶ���Ŀ�Լ�ÿ���ݶ�������
//�����������������������������˶������Ӫ����½���õ�ʱ�䡣
//����ʻ�ٶ�Ϊ50m/min��ԭ·���أ�ÿ���ϴ�1min���´�0.5min��
#include<stdio.h>
#include<math.h>
int main()
{
	int n;
	scanf("%d", &n);
	double a[100][3];
	int i = 0, j = 0;
	double k = 0;
	double sum = 0;
	for (i = 0; i < n; i++) {
		for (j = 0; j < 3; j++) {
			scanf("%lf", &k);
			a[i][j] = k;
		}
	}
	for (i = 0; i < n; i++) {
		double ret = sqrt(1.0 * a[i][0] * a[i][0] + 1.0 * a[i][1] * a[i][1]);//�����
		double time = a[i][2] * 1.0 + 2.0 * ret / 50 + 0.5 * a[i][2];//��ʱ��
		sum += time;
	}
	printf("%.0f", ceil(sum));
	return 0;
}