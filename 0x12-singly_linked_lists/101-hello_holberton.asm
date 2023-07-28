section .data
    hello_holberton db "Hello, Holberton,", 0
    fmt db "%s", 10, 0

section .text
    global main
    extern printf

main:
    mov rdi, fmt
    mov rsi, hello_holberton
    xor rax, rax
    call printf

    xor rdi, rdi
    call exit

section .bss
    exit_status resq 1

