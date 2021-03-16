global	_ft_strcmp

section	.text
_ft_strcmp:

push rdi ; s1
push rsi ; s2
mov rax, 0

loop:
	; while (s1[i] == s2[i])
	mov dl, BYTE [rsi + rax]
	cmp	BYTE [rdi + rax], dl
	jne return

	; if (s1[i] == '\0')
	cmp	BYTE [rdi + rax], 0
	je if_s2

	inc rax
	jmp loop

	; if (s2[i] == '\0')
	if_s2:
		cmp dl, 0
		je return_zero
		jne loop

return:
	mov cl, BYTE [rdi + rax]
	cmp cl, dl
	jg return_greater
	jl return_less

return_greater:
	mov rax, 1
	pop rdi
	pop rsi
	ret

return_less:
	mov rax, -1
	pop rdi
	pop rsi
	ret

return_zero:
	mov rax, 0
	pop rdi
	pop rsi
	ret