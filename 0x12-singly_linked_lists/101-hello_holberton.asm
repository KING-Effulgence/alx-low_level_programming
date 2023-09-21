data:
	format db "Hello, Holberton",10,0

text:
	global main

	extern printf

main:
	sub rsp, 8

	mov rdi, format
	xor eax, eax

	call printf

	add rsp, 8

	mov eax, 0
	ret
