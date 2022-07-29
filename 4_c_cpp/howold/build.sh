# Note that I had to run:
# sudo ln -s $(which wasm-ld-13 || which wasm-ld-12 || which wasm-ld-11 || which wasm-ld-10) /usr/bin/wasm-ld
# wasm-ld couldn't be found otherwise.

clang --target=wasm32 -nostdlib -Wl,--no-entry -Wl,--export-all howold_no_main.c -o howold.wasm
wasm-objdump -x howold.wasm