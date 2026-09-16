#include <stdio.h>

int isLessOrEqual(int x, int y) 
{
	return !((y+(~x+1)) >> 31);
}
