;int ft_strcmp(const char *s1, const char *s2);

global		_ft_strcmp

section	.text
_ft_strcmp:
			xor rax, rax	; rax = 0
			xor rdx, rdx	; rcx = 0
			xor rcx, rcx	; rcx = 0 (counter)
.loop:
			cmp byte[rsi + rcx], 0	; s1[rcx] == '\0'?
			jz .end					; if (s1[rcx] == '\0') -> return
			cmp byte[rdi + rcx], 0	; s2[rcx] == '\0'?
			jz .end					; if (s2[rcx] == '\0') -> return
			mov al, byte[rsi + rcx]	; al = s1[rcx]
			mov dl, byte[rdi + rcx]	; dl = s2[rcx]
			cmp al, dl				; al == dl?
			jnz .end				; if (al != dl) -> return
			inc rcx					; rcx++
			jmp .loop
.end:
			sub rax, rdx			; return al - dl