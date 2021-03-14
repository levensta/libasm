global	_ft_strlen

section	.text
_ft_strlen:

push rdi
mov rax, 0

loop:
cmp		BYTE [rdi + rax], 0
jz return
inc rax
jmp loop

return:
pop rdi
ret