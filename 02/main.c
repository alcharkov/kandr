#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdint.h>

unsigned setbits(unsigned x, int p, int n, int y) {
  return (x & (~(~0 << n) | (1 << p))) | (y & ~(~0 << n)) << (p - n);
}

unsigned invert(unsigned x, int p, int n){
  return x ^ (~(~0 << p + 1 - n) << (p - n));
}

unsigned int rightrot(unsigned x, int n) {
	int bits_size = (int) ceil(log2(x));
	return ((x & (~(~0 << (bits_size - n)) << n)) >> n) | ((x & ~(~0 << n)) << (bits_size + 1 - n));
}

int main() {
  unsigned int number = 178;
	printf("Answer:%u\n", setbits(number, 7, 4, 219));
	printf("Answer invert:%u\n", invert(number, 7, 4));
	printf("Answer rightrot:%u\n", rightrot(number, 3));
	return 0;
}
