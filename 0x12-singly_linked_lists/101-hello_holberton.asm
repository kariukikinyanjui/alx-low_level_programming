section .data
	hello_msg db "Hello, HOlberton", 0
	format db "%s", 10,0

section.text
	extern printf

global _start
_start:
	sub rsp, 8	; Adjust stack pointer

	mov rdi, format
	mov rsi, hello_msg
	xor eax, eax 	; Clear eax register
	call printf

	add rsp, 8	; Restore stack pointer

	mov eax, 60	;  System call number for exit
	xor edi, edi	; Exit status code 0
	syscall		; Invoke system call
