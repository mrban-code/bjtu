#include <stdio.h>
#include <math.h>
int main()
{
	double a,b,c;
	
	printf("请输入a的值：");
	scanf_s("%lf", &a);

	printf("请输入b的值：");
	scanf_s("%lf", &b);

	printf("请输入c的值：");
	scanf_s("%lf", &c);

	if (a == 0 && b == 0) {
		printf("No solution\n");
	}
	else if (a == 0) {
		double x = -c / b;
		printf("There is only one root，x=%lf\n",x);
	}
	else {
		double discriminant = b * b - 4 * a * c;
		if (discriminant < 0) {
			printf("There are no real roots\n");
		}
		else {
			double x1 = (-b + sqrt(discriminant)) / (2 * a);
			double x2 = (-b - sqrt(discriminant)) / (2 * a);
			printf("There are two real roots：x1=%lf,x2=%lf\n", x1, x2);
		}
	}
	return 0;
}