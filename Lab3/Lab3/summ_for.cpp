#include <math.h>
double summ(int n)
{
	double ai = 0;
	for (double i = 0; i < n; ++i)
	{
		ai = ai + pow(-1, i) * (1 - (2 * i - 1) / 2 / (i + 1));
	}
	return ai;
}