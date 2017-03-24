#include <stdio.h>
#include<stdlib.h>

#include"functions.h"

int main(int argc, char* argv[])
{
	if (argc < 3) {
		printf("Usage: %s base exponent\n", argv[0]);
		return 1;
	}

	double base = atof(argv[1]);	// Convert string to double
	int exponent = atoi(argv[2]);	// Convert string to integer
	double result = power(base, exponent);
	printf("%g ^ %d = %g\n", base, exponent, result);
	return 0;
/*
%c	以字元方式輸出
%d	10 進位整數輸出
%o	以 8 進位整數方式輸出
%u	無號整數輸出
%x, %X	將整數以 16 進位方式輸出
%f	浮點數輸出
%e, %E	使用科學記號顯示浮點數
%g, %G	浮點數輸出，取 %f 或 %e（%f 或 %E），看哪個表示精簡
%%	顯示 %
%s	字串輸出
%lu	long unsigned 型態的整數
%p	指標型態
*/
}