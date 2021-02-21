#include <math.h>
double summ2(double eps)
{
	double i = 0;
	double ai = pow(-1, i) * (1 - (2 * i - 1) / 2 / (i + 1));
	double sum = ai;
	for (i = 1; fabs(ai)>eps; ++i)
	{
		ai = pow(-1, i) * (1 - (2 * i - 1) / 2 / (i + 1));
		sum = sum + ai;
	}
	return fabs(sum);
}