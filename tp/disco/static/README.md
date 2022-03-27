Analysis of static allocations
======================

gcc -fno-asynchronous-unwind-tables -fno-pie -fno-stack-protector -fcf-protection=none -Wall global_variable.c -o global_variable

gcc -c -fno-asynchronous-unwind-tables -fno-pie -fno-stack-protector -fcf-protection=none -Wall global_variable.c -o global_variable.o

gcc -S -fno-asynchronous-unwind-tables -fno-pie -fno-stack-protector -fcf-protection=none -Wall global_variable.c

gcc -S -fno-asynchronous-unwind-tables -fno-pie -fno-stack-protector -fcf-protection=none -Wall local_static_variable.c

gcc -S -fno-asynchronous-unwind-tables -fno-pie -fno-stack-protector -fcf-protection=none -Wall string.c

gcc -c -fno-asynchronous-unwind-tables -fno-pie -fno-stack-protector -fcf-protection=none -Wall string.c -o string.o


GCC Additional options to invalidate security add-on processing
======================

-fno-asynchronous-unwind-tables -fno-pie -fno-stack-protector -fcf-protection=none 


Analysis of ELF binaries files
======================

readelf -h **elf_file**

objdump -S **elf_file**

objdump -s **elf_file**

objdump -t **elf_file**

objdump -h **elf_file**



