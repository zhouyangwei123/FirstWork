#include "stdio.h"

int main()
{
	int a, b, c;
	printf("请输入三边长\n");
	scanf_s("%d %d %d", &a, &b, &c);
	//printf("%d,%d,%d,", a, b, c);

	if ((a + b > c) && (b + c > a) && (a + c > b))
	{
		
		if (a == b && b == c)
			printf("等边三角形\n");
		else if (a == b || a == c || b == c)
			printf("等腰三角形\n");
		else if ((a * a + b * b == c * c) || (a * a + c * c == b * b) || (b * b + c * c == a * a))
			printf("直角三角形\n");
		else
			printf("普通三角形\n");

	}
	else
		printf("不可以");

	return 0;
}

