/*
 /home/debian/emsdk/upstream/emscripten/emcc \
 graphics.c -o graphics.js -O3 -s WASM=1 \
 -s EXTRA_EXPORTED_RUNTIME_METHODS='["cwrap","ccall"]'
*/
#include <emscripten.h>
 
EMSCRIPTEN_KEEPALIVE
int compute(int a, int b) {
    return a + b;
}
