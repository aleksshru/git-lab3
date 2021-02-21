#include <math.h>
double summ(int n)
{
	double ai = 0;
	double i = 0;
	
	do
	{
		ai = ai + pow(-1, i) * (1 - (2 * i - 1) / 2 / (i + 1));
		++i;
	}
	while (i < n);
	return ai;
}