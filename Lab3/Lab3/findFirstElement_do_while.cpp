#include <math.h>
int findFirstElement(double eps)
{
	double i = 0;
	int k = 1;
	double ai = pow(-1, i) * (1 - (2 * i - 1) / 2 / (i + 1));
	double sum = ai;
	do
	{
		++i;
		++k;
		ai = pow(-1, i) * (1 - (2 * i - 1) / 2 / (i + 1));
		if (fabs(ai) <= eps)
		{
			return k;
			break;
		}
		
	}
	while (fabs(ai) > eps);
}