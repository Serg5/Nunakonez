#include "pch.h"
#include <math.h>
double f(double x)
//�������� �-�
{
	if (x > 3.6)
		return (45 * pow(x, 2) + 5);
	else
		return 5 * x / (10 * pow(x, 2) + 1);
}
