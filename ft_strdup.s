global	_ft_strdup
extern _ft_strlen
extern _ft_strcpy
extern _malloc

section	.text

_ft_strdup:
	push rdi
	mov rax, 0

	call _ft_strlen
	push rdi ;s1
	mov rdi, rax
	inc rdi
	call _malloc
	cmp rax, 0
	je return_zero
	pop rdi ;s1
	mov rsi, rax
	call _ft_strcpy

return:
	pop rdi
	pop rsi
	ret

return_zero:
	pop rdi
	mov rax, 0
	ret