section .data
    hello db "Hello, Holberton",10,0
    format db "%s",0

section .text
    global main
    extern printf

main:
    sub rsp, 8
    mov rdi, format
    mov rsi, hello
    call printf
    add rsp, 8
    ret
