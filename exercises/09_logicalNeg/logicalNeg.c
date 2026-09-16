#include <stdio.h>

int logicalNeg(int x) {
	return ((x|(~x+1)) >> 31)+1; 
}
