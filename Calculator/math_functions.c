#include <math.h>
#include "math_functions.h"




int my_sum(int A, int B)
{
	return A+B;
}


int my_sub(int A, int B)
{
	return A-B;
}


int my_mult(int A, int B)
{
	return A*B;
}


float my_div(int A, int B)
{
	return (float)A/(float)B;
}


int my_pow(int A, int B)
{
	int ret = A;

	for (int i = 1; i < B; ++i)
	{
		ret *= A;
	}

	return ret;
}
