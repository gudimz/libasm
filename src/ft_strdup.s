; char *ft_strdup(const char *s1);

global		_ft_strdup
extern 		_ft_strlen
extern		_ft_strcpy
extern		_malloc

section	.text
_ft_strdup:
			push rdi			; save s1 in stack
			call _ft_strlen
			inc rax				; len s1 = rax + 1(for '\n')
			mov rdi, rax		; bytes for malloc
			call _malloc
			cmp rax, 0			; malloc == NULL?
			jz error			; if malloc ret NULL
			mov rdi, rax
			pop rsi				; get s1 in stack
			call _ft_strcpy		; ft_strcpy(rdi, rsi)
error:
			ret
