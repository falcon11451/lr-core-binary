#include <stdio.h>

int conditional(int x, int y, int z) {
	return (((x|(~x+1)) >> 31) & y) | (~((x|(~x+1)) >> 31) & z); 
}
