#include <stdio.h>

int main() {
	float mealcost, tipPercent, taxPercent;
	scanf("%f %f %f", &mealcost, &tipPercent, &taxPercent);
	mealcost += mealcost * (tipPercent + taxPercent) / 100;
	printf("%.0f", mealcost);
	return 0;
}