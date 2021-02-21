#include <math.h>
double summ2(double eps)
{
	double i = 0;
	double ai = pow(-1, i) * (1 - (2 * i - 1) / 2 / (i + 1));
	double sum = ai;
	i = 1;
	while ( fabs(ai) > eps)
	{
		ai = pow(-1, i) * (1 - (2 * i - 1) / 2 / (i + 1));
		sum = sum + ai;
		++i;
	}
	return fabs(sum);
}