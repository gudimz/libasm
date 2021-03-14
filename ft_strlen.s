; size_t	strlen(const char *s);

global		_ft_strlen

section	.text
_ft_strlen:
			xor rax, rax			; rax = 0 (counter)
.loop:
			cmp byte[rdi + rax], 0		; проверяем, в конце ли строки
			jz .return					; if byte[rdi + rax] == 0
			inc rax						; rax++
			jmp .loop
.return:
			ret