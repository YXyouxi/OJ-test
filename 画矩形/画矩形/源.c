#define _CRT_SECURE_NO_WARNINGS 1
//����һ�У������ĸ�������ǰ��������Ϊ���������δ�����εĸߺͿ��߲�����3�в�����10�У�������5�в�����10�У�
//������������һ���ַ�����ʾ������ͼ�ľ��η��ţ����ĸ�����Ϊ1��0��0������ģ�1����ʵ�ġ�
#include<stdio.h>
int main()
{
	int h = 0;//��
	int w = 0;//��
	char a;//�ַ�
	int flag = 0;//����ʵ��
	scanf("%d %d %c %d", &h, &w, &a, &flag);
	int i = 0;
	int j = 0;
	switch(flag){
	case 1:
		for (i = 1; i <= h; i++) {
			for (j = 1; j <= w; j++) {
				printf("%c", a);
			}
			printf("\n");
		}
		break;
	case 0:
		//�ȴ�ӡ��һ��
		for (i = 1; i <= w; i++) {
			printf("%c", a);
		}
		printf("\n");
		//��ӡ�м䲿��
		for (i = 2; i < h; i++) {
			printf("%c", a);
			for (j = 2; j < w; j++) {
				printf(" ");
			}
			printf("%c\n", a);
		}
		//��ӡ���һ��
		for (i = 1; i <= w; i++) {
			printf("%c", a);
		}
		break;
	default:
		break;
	}
	return 0;
}