
;--------------------------------------------------------------------------------------
;
; A 64-bit program in assembly that prints Hello, Holberton, followed by a new line.
; Compiled using nasm and gcc.
; nasm -f elf64 101-hello_holberton.asm && gcc 101-hello_holberton.o -o hello
;
;-------------------------------------------------------------------------------------
section .text
	default rel
	extern printf
	global main

main:
	push rbp

	mov rdi, fmt
	mov rsi, message
	mov rax, 0

	call printf wrt ..plt

	pop rbp

	mov rax,0
	ret

section .data
	message: db "Hello, Holberton", 0
	fmt: db "%s", 10, 0
