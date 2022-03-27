    .global printf_x86_64
       
	.text
printf_x86_64:
	mov 	$3,%rdx
	mov 	$tab,%rsi
	mov 	$1,%rdi
	mov 	$1,%rax	
	syscall
  	ret
