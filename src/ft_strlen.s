;size_t	ft_strlen(const char *s);

global		_ft_strlen

section	.text
_ft_strlen:
			xor rax, rax				; rax = 0 (counter)
.loop:
			cmp byte[rdi + rax], 0		; s[rax] == '\0'?
			jz .end						; if (s[rax] == '\0') -> return
			inc rax						; rax++
			jmp .loop
.end:
			ret