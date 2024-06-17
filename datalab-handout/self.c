#include <stdio.h>

int logicalNeg(int x) {
  return (((~x + 1) | x) >> 31) + 1;
}

int main(void) {
    printf("%d", logicalNeg(324));
    return 0;
}

/*
~x + 1    x 
0  0
1  -1
-max -max


0001
1111

0000
0000

1000
1000

0010
1110
*/