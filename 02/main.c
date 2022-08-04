#include <stdio.h>

unsigned setbits(unsigned x, int p, int n, int y) {
  return (x & (~(~0 << n) | (1 << p))) | (y & ~(~0 << n)) << (p - n);
}

unsigned invert(unsigned x, int p, int n){
  return x ^ (~(~0 << p + 1 - n) << (p - n));
}

int main() {
  unsigned int number = 178;
	printf("Answer:%u\n", setbits(number, 7, 4, 219));
	printf("Answer invert:%u\n", invert(number, 7, 4));
	return 0;
}
