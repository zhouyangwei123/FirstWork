#include "stdio.h"

int main()
{


	int a, b, c;
	printf("请输入三边长\n");
	scanf_s("%d %d %d", &a, &b, &c);
	printf("%d,%d,%d,", a, b, c);


	if ((a + b > c) && (b + c > a) && (a + c > b))
		printf("可以形成三角形\n");
	else
		printf("不可以");

	return 0;
}

