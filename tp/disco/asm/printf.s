    .global printf
       
	.text
printf:
	mov 	$3,%edx
	mov 	$tab,%ecx
	mov 	$1,%ebx
	mov 	$4,%eax	
	int 	$0x80
  	ret
  	
