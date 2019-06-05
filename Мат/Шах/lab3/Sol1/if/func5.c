#include "pch.h"
#include <stdio.h>
#include <math.h>
int findFirstNegativeElement(double eps)
{
	float f = 0;
	int ii;
	int n=1;
	for (int i = 0; i < n; ++i)
	{
		f = pow(-1, i)*(i + 1) / pow(2, i - 1);
		ii = i;
		if (fabs(f) <= eps && f<0)
			break;			
		else
			++n;
	}
	return ii;
}