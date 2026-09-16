#include <stdio.h>
int isLessOrEqual(int x, int y) 
{
	return !((y+(~x+1)) >> 31);
}
int main(void) {
  int x, y;
  if (scanf("%d %d", &x, &y) != 2)
    return 1;
  printf("%d\n", isLessOrEqual(x, y));
  return 0;
}
