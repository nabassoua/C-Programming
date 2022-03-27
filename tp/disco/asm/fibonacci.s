    .global main  
    
	.macro	CONVERT_TO_ASCII_AND_PRINT
		mov 	%eax,tmp_eax
		mov 	%edx,tmp_edx
		call 	itoa
		call 	printf	
		mov 	tmp_eax,%eax 
		mov 	tmp_edx,%edx 
	.endm
	
	.comm tmp_eax, 4
	.comm tmp_edx, 4

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
