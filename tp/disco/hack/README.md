Analysis of shellcode execution
======================

gcc -g shellcode.c -o bin/shellcode

gcc -g -fno-stack-protector -z execstack shellcode.c -o bin/shellcode

gcc -S -fno-stack-protector -fno-asynchronous-unwind-tables -fno-pie -fcf-protection=none -z execstack shellcode.c -o misc/shellcode.s

gcc -g -fno-stack-protector -fno-asynchronous-unwind-tables -fno-pie -fcf-protection=none -z execstack shellcode.c -o bin/shellcode

gdb ./bin/shellcode
(gdb) la a
(gdb) b main
(gdb) r
(gdb) s
(gdb) ni
...etc
(gdb) ni
$
$ exit
(gdb) q

gcc -c -fno-stack-protector -fno-asynchronous-unwind-tables -fno-pie -fcf-protection=none -z execstack shellcode.c -o obj/shellcode.o


Shellcode edition 
======================

gcc -g -fno-stack-protector -fno-asynchronous-unwind-tables -fno-pie -fcf-protection=none -static shell.c -o bin/shell 

objdump -S bin/shell > misc/shell_disassembly.md

gdb ./bin/shell
(gdb) la a
(gdb) b main
(gdb) r
(gdb) b execve
(gdb) c
(gdb) ni
...etc
(gdb) ni
$
$ exit
(gdb) q

as shell_asm.s -o obj/shell_asm.o 

ld obj/shell_asm.o -o bin/shell_asm


Exploit
======================

gcc -fno-stack-protector -z execstack exploit.c -o bin/exploit

gdb ./bin/exploit
(gdb) la a
(gdb) b main
(gdb) r
(gdb) b *main+200    ---> return(0); relative address
(gdb) c
(gdb) ni
...etc
(gdb) ni


GCC Additional options to invalidate security add-on processing
======================

-fno-stack-protector -fno-asynchronous-unwind-tables -fno-pie -fcf-protection=none 


Analysis of binaries files 
======================

objdump -fp **elf_file**

objdump -S **elf_file**

objdump -s **elf_file**


Analysis on 32bits mode
======================

gcc -g -m32 -Wall -fno-stack-protector -z execstack shellcode_i386.c -o bin/shellcode_i386

as --32 shell_asm_i386.s -o obj/shell_asm_i386.o 
ld -melf_i386 obj/shell_asm_i386.o -o bin/shell_asm_i386

gcc -g -m32 -Wall -fno-stack-protector -z execstack exploit_i386.c -o bin/exploit_i386



