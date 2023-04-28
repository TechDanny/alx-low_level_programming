section .data
	msg:	db "Hello, Holberton", 0
	fmt:	db "%s", 10, 0

section .text
	global main


extern printf

main:
	mov rsi, msg
	mov rdi, fmt
	mov rax, 0
	call printf

	mov rax, 0
	ret
