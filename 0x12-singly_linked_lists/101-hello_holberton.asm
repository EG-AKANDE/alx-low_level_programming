section .data
	msg db 'Hello, Holberton', 10
	format db "%s\n", 0

section .text
	global my_asm
	my_asm:
		mov rdi, msg		; load `msg` string address to `rdi`
		mov rsi, 16		; length to `rsi`
		mov rax, printf		; load `printf` to `rax`
		call rax		; call printf

		mov rax, 60		; load exit status to `rax`
		xor rdi, rdi
		syscall			; exit program

extern printf
