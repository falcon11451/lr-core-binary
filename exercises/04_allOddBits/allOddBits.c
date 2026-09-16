#include <stdio.h>

int allOddBits(int x) {
	for (int i = 1; i <= 31; i+=2)
		if (!(x & (1<<i))) return 0;
	return 1;
}
