/**
 * Compile to WASM
 *
 *  emcc sort.c -Os -s BINARYEN=1 -s WASM=1 -s SIDE_MODULE=1 -s EXPORTED_FUNCTIONS="['_sort', '_setup']" -o sort.wasm
 *
 * Compile to asm.js
 *  
 *   emcc sort.c -s EXPORTED_FUNCTIONS="['_sort', '_setup']" -O2 -s SIDE_MODULE=0 -s WASM=0 -o sort.asm.js
 *
 */

#include <stdio.h>

void bubble_sort(int* a, int n)
{
    int i = 0, j = 0, min = 0, tmp = 0, k = 0;
    if (n < 0 || a == NULL)
      return;

    for (i = 0; i < n; ++i) {
      min = a[i];
      k = 0;
      for (j = i + 1; j < n; ++j) {
        if (a[j] < min) {
          min = a[j];
          k = j;
        }
      }

      if (k > 0) {
        tmp = a[i];
        a[i] = min;
        a[k] = tmp;
      }
    }
}

#define N 1000

int a[N] = { 0 };

void setup()
{
  for (int i = 0; i < N; ++i)
    a[i] = N - i;
}

void sort(int count)
{
  for (int i = 0; i < count; ++i)
    bubble_sort(a, N);
}
