#include "pch.h"
#include <stdio.h>
#include <math.h>
double summ2(double eps)
{
	double f=0;
	int n = 1;
	for (int i=0; i<n; ++i)
	{
		f =f+ (pow(-1, i)*(i + 1) / pow(2, i - 1));
		if (fabs(f) <= eps)
			n=n-1;
		else
			++n;
	}
	return f;
}