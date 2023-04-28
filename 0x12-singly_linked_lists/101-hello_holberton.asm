global _start

section .data
    message db 'Hello, Holberton',10

section .text
_start:
    ; set up arguments for printf
    xor eax, eax
    lea rdi, [message]

    ; call printf
    mov eax, 0
    call printf

    ; exit program
    mov eax, 1
    xor ebx, ebx
    int 0x80
