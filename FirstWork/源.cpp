#include "stdio.h"

int main()
{
	int a, b, c;
	printf("���������߳�\n");
	scanf_s("%d %d %d", &a, &b, &c);
	//printf("%d,%d,%d,", a, b, c);

	if ((a + b > c) && (b + c > a) && (a + c > b))
	{
		
		if (a == b && b == c)
			printf("�ȱ�������\n");
		else if (a == b || a == c || b == c)
			printf("����������\n");
		else if ((a * a + b * b == c * c) || (a * a + c * c == b * b) || (b * b + c * c == a * a))
			printf("ֱ��������\n");
		else
			printf("��ͨ������\n");

	}
	else
		printf("������");

	return 0;
}

