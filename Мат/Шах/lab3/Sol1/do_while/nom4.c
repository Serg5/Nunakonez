#include "pch.h"
#include <stdio.h>
#include <math.h>
int findFirstElement(double eps)
{
	double f = 0;
	int ii;
	int n = 1;
	int i = 0;
	do
	{
		f = pow(-1, i)*(i + 1) / pow(2, i - 1);
		ii = i;
		if (fabs(f) <= eps)
		{
			break;
		}
		else
		{
			++n;
		}
		++i;
	} while (i < n - 1);
	return ii;
}