    .global main  
    
	.text
main:
	xor 	%eax,%eax
	mov 	$9,%ebx
	add		%ebx,%eax
	sub		$2,%eax
	ret
