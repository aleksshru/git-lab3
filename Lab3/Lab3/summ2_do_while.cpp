#include <math.h>
double summ2(double eps)
{
	double i = 0;
	double ai;
	double sum = 0;
	i = 0;
	do
	{
		ai = pow(-1, i) * (1 - (2 * i - 1) / 2 / (i + 1));
		sum = sum + ai;
		++i;
	}
	while (fabs(ai) > eps);
	return fabs(sum);
}