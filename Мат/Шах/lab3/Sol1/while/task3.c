#include "pch.h"
#include <stdio.h>
#include <math.h>
void print(int n, int k)
{
	float f = 0;
	int i = 0;
	while (i < n )
	{
		if (i == k)
		{
			++i;
			continue;
		}
		f = pow(-1, i)*(i + 1) / pow(2, i - 1);
		printf("%f\n", f);
		++i;
	}
}