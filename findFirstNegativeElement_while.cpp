#include <math.h>
int findFirstNegativeElement(double eps)
{
	double i = 0;
	int k = 1;
	double ai = pow(-1, i) * (1 - (2 * i - 1) / 2 / (i + 1));
	double sum = ai;
	i = 1;
	while (fabs(ai) > eps || ai > 0)
	{
		++k;
		ai = pow(-1, i) * (1 - (2 * i - 1) / 2 / (i + 1));
		if (fabs(ai) <= eps && ai < 0)
		{
			return k;
			break;
		}
		++i;
	}
}