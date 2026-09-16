#include <stdio.h>
int bitXor(int x, int y) {
        return ~(x&y) & ~(~x&~y);
}
int main(void) {
  int x, y;
  if (scanf("%d %d", &x, &y) != 2)
    return 1;
  printf("%d\n", bitXor(x, y));
  return 0;
}
