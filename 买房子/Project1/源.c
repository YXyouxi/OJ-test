#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//ĳ����Ա��ʼ��������нN����ϣ�����йش幫����һ��60ƽ�׵ķ��ӣ����ڼ۸���200��
//���跿�Ӽ۸���ÿ��ٷ�֮K���������Ҹó���Աδ����н���䣬�Ҳ��Բ��ȣ����ý�˰
//ÿ������N��ȫ�������������ʵڼ����ܹ��������׷��ӣ�����һ����нN�򣬷���200��
//����ڵ�20�����֮ǰ�����������׷��ӣ������һ������M����ʾ������Ҫ�ڵ�M�������£��������Impossible��
int main()
{
	int N, K;
	scanf("%d %d", &N, &K);
	int sum = N;
	double price = 200;
	int i = 0;
	if (N >= 200) {
		printf("1");
		goto out;
	}
	for (i = 2; i <= 20; i++) {
		sum += N;
		price = (1 + 0.01 * K) * price;
		if (sum >= price) {
			printf("%d", i);
			break;
		}
	}
	if (sum < price) {
		printf("Impossible");
	}
	out:
	return 0;
}