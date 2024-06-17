#include <stdio.h>

int conditional(int x, int y, int z) {
  return (!!x ^ y - (!!x & !~(y << 31)));
}

int main(void) {
    printf("%d", conditional(1, 98, 5));
    return 0;
}