	.global _start

	.text 
_start:
	push 	%ebp
	mov 	%esp, %ebp
	call 	main
	mov		$1, %eax
	int		$0x80
	
	
