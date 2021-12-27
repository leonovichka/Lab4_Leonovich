#include <math.h>

double f(const double *x, const double* y, double *result)
{
	*result = (sin(*x)+cos(2**y-*x))/(cos(*x)-sin(2**y-*x));
}