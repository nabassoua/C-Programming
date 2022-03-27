    .global main  
    
	.macro	CONVERT_TO_ASCII_AND_PRINT
		mov 	%rax,tmp_rax
		mov 	%rdi,tmp_rdi
		mov 	%rsi,tmp_rsi
		mov 	%rdx,tmp_rdx		
		call 	itoa
		call 	printf_x86_64	
		mov 	tmp_rdx, %rdx
		mov 	tmp_rsi, %rsi
		mov 	tmp_rdi, %rdi
		mov 	tmp_rax, %rax

	.endm

	.comm tmp_rax, 8
	.comm tmp_rsi, 8	
	.comm tmp_rdi 8
	.comm tmp_rdx, 8

	.text
main:
	xor 	%eax,%eax
	CONVERT_TO_ASCII_AND_PRINT
	mov 	$1,%eax
	CONVERT_TO_ASCII_AND_PRINT
	xor 	%esi,%esi
	xor 	%edx,%edx
.L0:
	mov		%eax,%edi
	add		%esi,%eax
	mov		%edi,%esi
	CONVERT_TO_ASCII_AND_PRINT
	add		$1,%edx
	cmp		$5,%edx
	jb		.L0	
	ret
