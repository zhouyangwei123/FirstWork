#include "stdio.h"

int main()
{


	int a, b, c;
	printf("���������߳�\n");
	scanf_s("%d %d %d", &a, &b, &c);
	printf("%d,%d,%d,", a, b, c);


	if ((a + b > c) && (b + c > a) && (a + c > b))
		printf("�����γ�������\n");
	else
		printf("������");

	return 0;
}

