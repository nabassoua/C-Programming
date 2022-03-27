Standard 32 bits compiling
======================

gcc -Wall -m32 -I./include src/hello.c -o build/bin/hello


Execution
======================

./build/bin/hello


Analysis of compiling, assembling and linking workflow
======================

gcc -E -Wall -m32 -I./include src/hello.c > build/misc/hello.i

gcc -S -Wall -m32 build/misc/hello.i -o build/misc/hello.s

gcc -S -fno-asynchronous-unwind-tables -fno-pie -fno-stack-protector -fcf-protection=none -Wall -m32 build/misc/hello.i -o build/misc/hello.s

as --32 build/misc/hello.s -o build/obj/hello.o

gcc -m32 build/obj/hello.o -o build/bin/hello


Analysis of linking with minimal startup file
======================

gcc -v -Wall -m32 build/obj/hello.o -o build/bin/hello

as --32 build/startup/crt0.s -o build/obj/crt0.o

ld -melf_i386 build/obj/crt0.o build/obj/hello.o -o build/bin/hello


Analysis of linking with minimal linker script
======================

gcc  -m32 -Wl,--verbose

gcc -c -fno-asynchronous-unwind-tables -fno-pie -fno-stack-protector -fcf-protection=none -Wall -m32 -I./include src/hello.c -o build/obj/hello.o

ld -melf_i386 -T build/script/linker_script_minimal.ld build/obj/crt0.o build/obj/hello.o -o build/bin/hello


Analysis of binaries files 
======================

readelf -h **elf_file**

objdump -S **elf_file**

objdump -s **elf_file**

objdump -h **elf_file**


Stripping
======================

strip build/bin/hello


Clean project
======================

rm build/misc/*.* build/obj/*.o build/bin/*


Analysis of 64bits compiling, assembling and linking
======================

gcc -E -Wall -I./include src/hello.c > build/misc/hello_x86_64.i

gcc -S -fno-asynchronous-unwind-tables -fno-pie -fno-stack-protector -fcf-protection=none -Wall build/misc/hello_x86_64.i -o build/misc/hello_x86_64.s

as build/misc/hello_x86_64.s -o build/obj/hello_x86_64.o

as build/startup/crt0_x86_64.s -o build/obj/crt0_x86_64.o

#### Minimal x86_64 linker script
ld -melf_x86_64 -T ../toolchain/build/script/linker_script_minimal_x86_x64.ld build/obj/crt0_x86_64.o build/obj/hello_x86_64.o -o build/bin/hello

#### Default x86_64 linker script
ld -melf_x86_64 build/obj/crt0_x86_64.o build/obj/hello_x86_64.o -o build/bin/hello



