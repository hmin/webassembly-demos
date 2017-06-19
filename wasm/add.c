/**
 * How to compile:
 *
 * emcc add.c -Os -s WASM=1 -s SIDE_MODULE=1 -s EXPORTED_FUNCTIONS="['_add']" -o add.wasm
 *
 */
#include <stdio.h>

extern void myJSFunc(void);

int add(int x, int y) {
  myJSFunc();
  return x + y;
}
