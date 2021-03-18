;ssize_t	ft_read(int fildes, void *buf, size_t nbyte)

global	_ft_read
extern	___error

section	.text
_ft_read:
		mov rax, 0x2000003		; код системного вызова read
		syscall
		jc	error				; если ошибка (СF = 1), прыгаем в error
		ret
error:
		push rax				; сохраняем код ошибки в стэк
		call ___error			; получаем адрес errno
		pop rbx					; получаем код ошибки из стэка
		mov [rax], rbx			; записываем код ошибки по адресу errno
		mov rax, -1				; return -1
		ret