#!/bin/sh

echo "Compile to native"
gcc -Os sort_main.c

echo "Comiple to WASM"
emcc sort.c -Os -s BINARYEN=1 -s WASM=1 -s SIDE_MODULE=1 -s BINARYEN=1 -s EXPORTED_FUNCTIONS="['_sort', '_setup']" -o sort.wasm

echo "Compile to asm.js"
emcc sort.c -s EXPORTED_FUNCTIONS="['_sort', '_setup']" -Os -s SIDE_MODULE=0 -s WASM=0 -o sort.asm.js

echo "Done!"
