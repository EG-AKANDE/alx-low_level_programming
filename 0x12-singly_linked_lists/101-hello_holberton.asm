section .data
	msg db 'Hello, Holberton', 10
	format db "%s\n", 0

section .text
	global main_two
	main_two:
		mov edi, 0		; first argument: file descriptor (0 for stdout)
		mov rsi, format		; second argument: format string
		mov rdx, msg		; third argument: message string
		mov eax, 0		; zero out rax
		call printf		; call printf

		mov eax, 60		; system call for exit
		xor edi, edi		; exit status
		syscall			; exit program

extern printf
