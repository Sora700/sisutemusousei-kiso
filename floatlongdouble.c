#include<float.h>
#include<limits.h>
#include<stdio.h>

int main(void)
{
	printf("float型の最大値:%g\n", FLT_MAX);
	printf("float型の最小値:%g\n", FLT_MIN);
	printf("float型の精度:%g\n", FLT_DIG);
	printf("longdouble型の最大値:%Lf\n", LDBL_MAX);
	printf("longdouble型の最小値:%Lf\n", LDBL_MIN);
	printf("longdouble型の精度:%Lf\n", LDBL_DIG);
	return 0;
}