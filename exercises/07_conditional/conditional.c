#include <stdio.h>
int conditional(int x, int y, int z) {
	return (((x|(~x+1)) >> 31) & y) | (~((x|(~x+1)) >> 31) & z); 
}
int main(void) {
  int x, y, z;
  if (scanf("%d %d %d", &x, &y, &z) != 3)
    return 1;
  printf("%d\n", conditional(x, y, z));
  return 0;
}
