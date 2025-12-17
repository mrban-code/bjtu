#include <stdio.h>
int main()
{
	float x;
	printf("请输入x的值：");
	scanf_s("%f", &x);
	 
	if (x < 0) {
		printf("y的值为：1\n");
	}
	else {
		if (x == 0) {
			printf("y的值为：0\n");
		}
		else {
			printf("y的值为：-1\n");
		}
	}
	return 0;
}