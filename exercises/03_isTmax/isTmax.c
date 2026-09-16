#include <stdio.h>
int isTmax(int x) {
	return (!(x+1 ^ ~x) & !!(x+1));
}
int main(void) {
  int x;
  if (scanf("%d", &x) != 1)
    return 1;
  printf("%d\n", isTmax(x));
  return 0;
}
