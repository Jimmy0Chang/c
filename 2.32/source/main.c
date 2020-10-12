#include <stdio.h>
#include <stdlib.h>


int main(void)
{
	double w;
	double h;
	double x;
	double e;


	scanf_s(" %lf%lf", &w,&h);
	

	x = h * h;
	e = w / x;
	printf("your BMI : %f", e);
	if (e < 18.5) {
		printf("you are underweight");
	}
	if (e >= 18.5 && e <= 24.9) {
		printf("you are normal");
	}
	if (e >= 25 && e <= 29.9) {
		printf("you are overweight");
	}
	if (e >= 30)
	{
		printf("you are obese");
	}




	return 0;
}