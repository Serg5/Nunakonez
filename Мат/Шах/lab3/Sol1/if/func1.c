#include "pch.h"
#include <math.h>
#include <stdio.h>
double summ(int n)
{
	double y=0;
	for (int i = 0; i < n;  ++i)
	{
		y = y + pow(-1, i)*(i + 1) / pow(2, i - 1);
	}
	return y;
}