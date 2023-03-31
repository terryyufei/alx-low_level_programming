section .data
    hello: db "Hello, Holberton", 10, 0   ; Message to print (null-terminated string)

section .text
    global main

    extern printf

main:
    ; Set up stack frame
    push rbp
    mov rbp, rsp

    ; Call printf with the message string
    lea rdi, [hello]
    xor eax, eax    ; Clear return value
    call printf

    ; Clean up stack and return
    mov rsp, rbp
    pop rbp
    xor eax, eax    ; Return 0
    ret

