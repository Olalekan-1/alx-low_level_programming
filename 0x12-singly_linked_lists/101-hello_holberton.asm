global _start

section .text

_start:
	MOV rax, 0x1
	MOV rdi, 0X1
	MOV rsi, msg
	MOV rdx, msglength
	SYSCALL

	MOV rax, 0x3C
	MOV rdi, 0x0
	SYSCALL

section .data
	msg: DB "Hello, Holberton", 0xA
	msglength: EQU $ - msg
