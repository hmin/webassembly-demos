/**
 * sum.c - show how to generate asm.js version for C/C++ program.
 *
 * How to compile:
 *
 * emcc sum.c -o sum.html
 */
#include <stdio.h>
#include <stdlib.h>

int main() {
  int* sum = (int*)malloc(sizeof(int));
  for (int i = 1; i <= 100; i++)
    *sum += i;

  printf("sum of 1...100: %d", *sum);

  return 0;
}
