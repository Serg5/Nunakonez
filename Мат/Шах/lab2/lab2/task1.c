#include "pch.h"
#include <math.h>
_Bool isInArea(double x, double y)//Прототип ф-и
{
	if ((sqrt(pow(x, 2) + pow(y, 2)) <= 1) && (x >= 0 || y >= 0))
		return 1;
	else
		return 0;
}
