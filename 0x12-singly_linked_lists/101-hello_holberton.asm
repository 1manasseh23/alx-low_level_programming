		extern printf
section .data
	hello db "Hello, Holberton", 0
	fmt db "%s", 10, 0
section .text
	global main

main:
	push rbp
	mov rdi, fmt
	mov rsi, hello
	call printf
	mov rax,0
	pop rbp
	mov rax,0
	ret
section .data
section .bss
section .bss
