#include <math.h>
#include <iostream>
int findFirstNegativeElement(double eps)
{
	double i = -1;
	double ai;
	int k = 0;
	do
	{
		++i;
		++k;
		ai = pow(-1, i) * (1 - (2 * i - 1) / 2 / (i + 1));
		if (fabs(ai) <= eps && ai < 0)
		{
			return k;
			break;
		}

	} 
	while (fabs(ai) > eps || ai > 0);
}