;ssize_t	ft_write(int fildes, const void *buf, size_t nbyte);

global	_ft_write
extern	___error

section	.text
_ft_write:
		mov rax, 0x2000004		; код системного вызова write
		syscall
		jc	error				; если ошибка (СF = 1), прыгаем в error
		ret
error:
		push rax				; сохраняем код ошибки в стек
		call ___error			; получаем адрес errno
		pop rbx					; получаем код ошибки из стека
		mov [rax], rbx			; записываем код ошибки по адресу errno
		mov rax, -1				; return -1
		ret