#include<float.h>
#include<limits.h>
#include<stdio.h>

int main(void)
{
	printf("float型の最大値:%g\n", FLT_MAX);
	printf("float型の最小値:%g\n", FLT_MIN);
	printf("float型の精度:%g\n", FLT_DIG);
	printf("char型の最大値:%d\n", CHAR_MAX);
	printf("charの最小値:%d\n", CHAR_MIN);
	printf("char型の符号なし最大値:%d\n", UCHAR_MAX);
	return 0;
}