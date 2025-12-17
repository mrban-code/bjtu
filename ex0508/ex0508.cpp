#include <stdio.h>
int main()
{
	int amount;
	float discount = 0.0, net_amount;
	char items;
	char Mill_cloth = 'M';
	char Handloom_items = 'H';

	printf("Please input the items type,Mill_cloth for M,Handloom_items for H:");
	scanf_s("%c", &items);
	if (items != Mill_cloth && items != Handloom_items) {
		printf("Invalid input.Exiting.\n");
		return 0;
	}

	printf("Please input the amount:");
	if (scanf_s("%d", &amount) != 1) {
		printf("Invalid input for amount.Exiting.\n");
		return 0;
	}
	
	switch (items) {
	case'M':
		if (amount >= 0 && amount <= 100) {
			discount = 0.0;
		}
		else if (amount >= 101 && amount <= 200) {
			discount = 0.05;
		}
		else if (amount >= 201 && amount <= 300) {
			discount = 0.075;
		}
		else {
			discount = 0.1;
		}
		break;
	case'H':
		if (amount >= 0 && amount <= 100) {
			discount = 0.05;
		}
		else if (amount >= 101 && amount <= 200) {
			discount = 0.075;
		}
		else if (amount >= 201 && amount <= 300) {
			discount = 0.1;
		}
		else {
			discount = 0.15;
		}
		break;
	}
	net_amount = amount * (1 - discount);
	printf("The net amount to be paid by a customer is %f\n", net_amount);
	return 0;
} 