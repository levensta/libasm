global	_ft_strcpy

section	.text
_ft_strcpy:

push rdi ; dst
push rsi ; src
mov rax, 0

loop:
	cmp		BYTE [rsi + rax], 0
	jz return
	mov dl, BYTE [rsi + rax]
	mov BYTE [rdi + rax], dl
	inc rax
	jmp loop

return:
	mov BYTE [rdi + rax], 0
	mov rax, rdi
	pop rdi
	pop rsi
	ret