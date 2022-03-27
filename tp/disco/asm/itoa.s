    .global itoa  
    .global tab  

	.data   
tab:
	.zero		1
	.string		"\n"

	.text
itoa:
	add 	$48,%eax
	mov 	%al,tab
	ret
