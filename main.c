#include <stdio.h>
#include <math.h>

int main(int argc, char **argv) {
	double a, b, c, d, x1, x2;
	printf("Enter a, b, c:\n");
	scanf("%lf %lf %lf", &a, &b, &c);
	d = b * b - 4 * a * c;
	if(d == 0) {
		x1 = -b / 2 * a;
		printf("x1=x2=%lf\n", x1);
	}
	else if (d < 0)	{
		printf("No real solution\n");
	}
	else /* (d > 0) */ {
		x1 = (-b + sqrt(d)) / 2 * a;
		x2 = (-b - sqrt(d)) / 2 * a;
		printf("x1=%lf\n", x1);
		printf("x2=%lf\n", x2);
	}
	return 0;
}
