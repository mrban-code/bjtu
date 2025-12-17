#include <stdio.h>
int main()
{
	int number;
	printf("Enter a number:");
	scanf_s("%d", &number);

	if (number % 2 == 0) {
		printf("NUMBER IS EVEN\n");
	}
	if (number % 2 == 1) {
		printf("NUMBER IS ODD\n");
	}
	return 0;
}