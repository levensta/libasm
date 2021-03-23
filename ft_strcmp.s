global	_ft_strcmp

section	.text

_ft_strcmp:

push rdi ; s1
push rsi ; s2
mov rax, 0
mov rdx, 0
mov rcx, 0

loop:
	mov 	dl, BYTE [rdi + rax]
	mov 	cl, BYTE [rsi + rax]
	cmp		dl, cl
	jne return
	cmp dl, 0
	je zero

	inc rax
	jmp loop

return:
	sub rdx, rcx
	jl less
	jg great

zero:
	mov rax, 0
	pop rdi
	pop rsi
	ret

less:
	mov rax, -1
	pop rdi
	pop rsi
	ret 

great:
	mov rax, 1
	pop rdi
	pop rsi
	ret 