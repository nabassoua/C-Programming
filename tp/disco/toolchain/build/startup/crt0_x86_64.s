	.global _start

	.text 
_start:
	push 	%rbp
	mov 	%rsp, %rbp
	call 	main
	mov 	$60, %eax
	xor 	%edi,%edi
	syscall
	
	
