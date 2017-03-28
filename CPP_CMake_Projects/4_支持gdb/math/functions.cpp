/*
power-计算指数
base地exponet次方
*/

double power(double base, int exponent)
{
	int result = 1;

	if (exponent == 0) {
		return	1;
	}

	for (int i = 0; i < exponent; ++i) {
		result = result*base;
	}
	return result;
}