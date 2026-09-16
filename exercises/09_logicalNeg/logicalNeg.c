#include <stdio.h>
int logicalNeg(int x) {
	return ((x|(~x+1)) >> 31)+1; 
}
int main(void) {
  int x;
  if (scanf("%d", &x) != 1)
    return 1;
  printf("%d\n", logicalNeg(x));
  return 0;
}
