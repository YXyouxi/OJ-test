#define _CRT_SECURE_NO_WARNINGS 1
//���Ŀ¼��������� 28.9 Ԫ/��
//���ݽṹ���㷨 32.7 Ԫ / ��
//�����߼� 45.6Ԫ / ��
//C++������ƽ̳� 78 Ԫ / ��
//�˹����� 35 Ԫ / ��
//�������ϵ�ṹ 86.2 Ԫ / ��
//����ԭ�� 27.8Ԫ / ��
//����ϵͳ 43 Ԫ / ��
//��������� 56 Ԫ / ��
//JAVA������� 65 Ԫ / ��
#include<stdio.h>
int main()
{
	int number[10] = { 0 };
	int i = 0;
	for (i = 0; i < 10; i++) {
		scanf("%d", &number[i]);
	}
	printf("%.1lf", 28.9 * number[0] + 32.7 * number[1] + 45.6 * number[2] + 78.0 * number[3] +
		35.0 * number[4] + 86.2 * number[5] + 27.8 * number[6] + 43.0 * number[7] +
		56.0 * number[8] + 65.0 * number[9]);
	return 0;
}