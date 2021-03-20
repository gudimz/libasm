;int ft_strcmp(const char *s1, const char *s2);

global		_ft_strcmp

section	.text
_ft_strcmp:
			xor rax, rax	; rax = 0
			xor rdx, rdx	; rcx = 0
			xor rcx, rcx	; rcx = 0 (counter)
.loop:
			mov al, byte[rdi + rcx]	; al = s1[rcx]
			mov dl, byte[rsi + rcx]	; dl = s2[rcx]
			inc rcx					; rcx++
			cmp al, dl				; al == dl?
			jnz .end				; if (al != dl) -> return
			cmp al, 0
			jnz .loop
.end:
			sub rax, rdx			; return al - dl
			ret