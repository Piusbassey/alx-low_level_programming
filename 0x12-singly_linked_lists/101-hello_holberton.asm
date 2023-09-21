section .data
    hello db "Hello, Holberton",0
    format db "%s",10,0

section .text
    extern printf
    global main

main:
    ; Set up the stack frame
    push rbp
    mov rdi, format
    mov rsi, hello
    call printf

    ; Clean up the stack and exit
    pop rbp
    ret
