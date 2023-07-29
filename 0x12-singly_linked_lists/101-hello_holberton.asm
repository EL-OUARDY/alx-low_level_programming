; data section define varibales
section .data
	; variable string with newline character (\n == 0x0A in hexa)
	msg db `Hello, Holberton`,0x0A

; text section contains the executable code
section .text
	; where to start
	global main

	; tells the assembler that printf is an external function defined in a library
	extern printf

; the entry point of the program
main:
	; edi register hold the destination address of the msg string
	mov edi, msg
	; clears the eax register
	xor eax, eax

	; call printf function form external library
	call printf
	; sets the eax register to zero (return value)
	mov eax, 0
	; terminates the program - retrun the instruction that cause the exit
	ret

; Imagine assembly is the only programming language (-_^)
