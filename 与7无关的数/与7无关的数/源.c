#define _CRT_SECURE_NO_WARNINGS 1
//һ��������,������ܱ�7����,��������ʮ���Ʊ�ʾ����ĳһλ�ϵ�����Ϊ7,�����Ϊ��7��ص���
//��������С�ڵ���n(n < 100)����7�޹ص���������ƽ����.
#include<stdio.h>
int main()
{
	int n = 0;
	scanf("%d", &n);
	int i = 0;
	int j = 0;
	int sum = 0;
	int flag = 1;//�ж��Ƿ������ĿҪ��
	//����1��n
	for (i = 1; i <= n; i++) {
		//���ж��ܷ�7����
		if (i % 7 != 0) {
			int tmp = i;
			//�ж�ÿһλ�Ƿ񶼲���7
			for(;tmp>0;){
				if (tmp % 10 != 7) {
					tmp /= 10;
				}
				else {
					flag = 0;
					break;
				}
			}
			if (flag == 1) {
				sum = sum + i * i;
			}
			flag = 1;
		}
	}
	printf("%d", sum);
	return 0;
}