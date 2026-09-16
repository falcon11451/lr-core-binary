#include <stdio.h>

int isTmax(int x) {
	return (!(x+1 ^ ~x) & !!(x+1));
}
