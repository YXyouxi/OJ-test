#define _CRT_SECURE_NO_WARNINGS 1
//ĳҽԺ��ͳ��һ��ĳ����Ļ������������Ƿ��йأ���Ҫ����ǰ����ϼ�¼��������
//����0-18��19-35��36-60��61���ϣ���61���ĸ������ͳ�ƵĻ�������ռ�ܻ��������ı�����
#include<stdio.h>
int main()
{
	int n = 0;
	int age[100] = { 0 };
	scanf("%d", &n);
	int i = 0;
	double a = 0, b = 0, c = 0, d = 0;
	for (i = 0; i < n; i++) {
		scanf("%d", &age[i]);
		if (age[i] <= 18) {
			a++;
		}
		else if (age[i] <= 35) {
			b++;
		}
		else if (age[i] <= 60) {
			c++;
		}
		else if (age[i] >= 61) {
			d++;
		}
	}
	printf("%.2f%%\n%.2f%%\n%.2f%%\n%.2f%%", a / n * 100, b / n * 100, c / n * 100, d / n * 100);
	return 0;
}