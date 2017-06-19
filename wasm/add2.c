/**
 * How to compile:
 * 
 * emcc add2.c -Os -s WASM=1 -s SIDE_MODULE=0 -s EXPORTED_FUNCTIONS="['_add']" -o add2.js
 *
 */
#include <stdio.h>

int add(int x, int y) {
  printf("add %d and %d\n", x, y);
  return x + y;
}
