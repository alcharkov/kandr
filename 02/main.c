#include <stdio.h>

unsigned setbits(unsigned x, int p, int n, int y) {
  return (x & (~(~0 << n) | (1 << p))) | (y & ~(~0 << n)) << (p - n);
}

int main() {
  unsigned int number = 178;
	printf("Answer:%u\n",setbits(number, 7, 4, 219));
	return 0;
}
