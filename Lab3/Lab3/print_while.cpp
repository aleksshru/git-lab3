#include <math.h>
#include <iostream>
using namespace std;
void print(int n, int k)
{
	double ai;
	int c = 0;
	double i = 0;
	while (i < n)
	{
		++c;
		if (c == k)
		{
			c = 0;
			++i;
			continue;
		}
		ai = pow(-1, i) * (1 - (2 * i - 1) / 2 / (i + 1));
		printf("%.1f ", ai);
		++i;
	}
}