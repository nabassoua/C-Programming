	.global _start
	
	.text
_start:
	pushl $0	
	pushl $0x68732f2f
	pushl $0x6e69622f		
	movl $0,%edx
	movl %edx,%ecx
	movl %esp,%ebx
	movl $0xb,%eax
	int $0x80
