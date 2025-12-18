#include <stdio.h>
int main()
{
	float x;
	printf("请输入x的值：");
	scanf_s("%f", &x);

	printf("y的值为：%d\n", (x < 0) ? 1 : (x == 0) ? 0 : -1);
	return 0;
}