(module
    (memory (export "memory") 1)
    (data (i32.const 0x0) "\03") ;; 3 entries
    (data (i32.const 0x1) "\07\03") ;; hey
    (data (i32.const 0x3) "\0a\05") ;; heeey
    (data (i32.const 0x5) "\0f\08") ;; heeeeeey
    (data (i32.const 0x7) "hey")
    (data (i32.const 0xa) "heeey")
    (data (i32.const 0xf) "heeeeeey")
)