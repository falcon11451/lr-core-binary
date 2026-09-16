#include <stdio.h>
int isAsciiDigit(int x) 
{
	return !((x+(~0x30+1))>>31) & !((0x39+(~x+1))>>31);
}
int main(void) {
  int x;
  if (scanf("%d", &x) != 1)
    return 1;
  printf("%d\n", isAsciiDigit(x));
  return 0;
}
