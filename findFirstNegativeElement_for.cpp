#include <math.h>
#include <iostream>
int findFirstNegativeElement(double eps)
{
	double i = 0;
	int k = 1;
	double ai = pow(-1, i) * (1 - (2 * i - 1) / 2 / (i + 1));
	for (double i = 1; fabs(ai) > eps || ai > 0; ++i)
	{
		++k;
		ai = pow(-1, i) * (1 - (2 * i - 1) / 2 / (i + 1));
		if (fabs(ai) <= eps && ai < 0)
		{
			return k;
			break;
		}
	}
}