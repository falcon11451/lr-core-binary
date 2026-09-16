#include <stdio.h>
int negate(int x) {
	return ~x+1;
}
int main(void) {
  int x;
  if (scanf("%d", &x) != 1)
    return 1;
  printf("%d\n", negate(x));
  return 0;
}
