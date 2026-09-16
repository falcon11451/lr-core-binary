#include <stdio.h>

int isAsciiDigit(int x) 
{
	return !((x+(~0x30+1))>>31) & !((0x39+(~x+1))>>31);
}
