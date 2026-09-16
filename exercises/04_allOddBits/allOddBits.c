#include <stdio.h>
int allOddBits(int x) {
	for (int i = 1; i <= 31; i+=2)
		if (!(x & (1<<i))) return 0;
	return 1;
}
int main(void) {
  int x;
  if (scanf("%d", &x) != 1)
    return 1;
  printf("%d\n", allOddBits(x));
  return 0;
}
