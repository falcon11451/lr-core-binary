#include <stdio.h>
int tmin(void) {
	return 1<<31;
}
int main(void) {
  printf("%d\n", tmin());
  return 0;
}
