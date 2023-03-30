extern printf

section .text
global main

main:
push rbp
mov rdi,fmt
mov rsi,msgnasm -f elf64 101-hello_holberton.asm && gcc -no-pie -std=gnu89 101-hello_holberton.o -o hello
mov rax,0
call printf

pop rbp
mov rax,0
ret
section .dat
msg: db "hello, Holberton", 0
fmt: db "%s", 10, 0
