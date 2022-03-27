Analysis of x86 32bits assembly
Arithmetic and logic example
======================

as --32 -g ../toolchain/build/startup/crt0.s -o obj/crt0.o

as --32 -g logic_arithmetic.s -o obj/logic_arithmetic.o

ld -melf_i386 -T ../toolchain/build/script/linker_script_minimal.ld obj/crt0.o obj/logic_arithmetic.o -o bin/logic_arithmetic

objdump -S bin/logic_arithmetic


Analysis of x86 32bits assembly
Integer to ASCII example
======================

as --32 -g ../toolchain/build/startup/crt0.s -o obj/crt0.o

as --32 -g logic_arithmetic.s -o obj/logic_arithmetic.o

as --32 -g itoa.s -o obj/itoa.o

ld -melf_i386 -T ../toolchain/build/script/linker_script_minimal.ld obj/crt0.o obj/logic_arithmetic.o obj/itoa.o -o bin/logic_arithmetic


Analysis of x86 32bits assembly
Printf example
======================

as --32 -g ../toolchain/build/startup/crt0.s -o obj/crt0.o

as --32 -g logic_arithmetic.s -o obj/logic_arithmetic.o

as --32 -g itoa.s -o obj/itoa.o

as --32 -g printf.s -o obj/printf.o

ld -melf_i386 -T ../toolchain/build/script/linker_script_minimal.ld obj/crt0.o obj/logic_arithmetic.o obj/itoa.o obj/printf.o -o bin/logic_arithmetic


Analysis of x86 32bits assembly
Fibonacci example (only 7 samples)
======================

as --32 -g ../toolchain/build/startup/crt0.s -o obj/crt0.o

as --32 -g fibonacci.s -o obj/fibonacci.o

as --32 -g itoa.s -o obj/itoa.o

as --32 -g printf.s -o obj/printf.o

ld -melf_i386 -T ../toolchain/build/script/linker_script_minimal.ld obj/crt0.o obj/fibonacci.o obj/itoa.o obj/printf.o -o bin/fibonacci


Analysis of 32bits static library building
======================

as --32 -g ../toolchain/build/startup/crt0.s -o obj/crt0.o

as --32 -g fibonacci.s -o obj/fibonacci.o

as --32 -g itoa.s -o obj/itoa.o

as --32 -g printf.s -o obj/printf.o

ar -rcs lib/libc.a obj/itoa.o obj/printf.o 

ld -melf_i386 -T ../toolchain/build/script/linker_script_minimal.ld obj/crt0.o obj/fibonacci.o lib/libc.a -o bin/fibonacci

readelf -h lib/libc.a


Analysis of 64bits assembling and linking
======================

as -g ../toolchain/build/startup/crt0_x86_64.s -o obj/crt0_x86_64.o

as -g fibonacci_x86_64.s -o obj/fibonacci_x86_64.o

as -g itoa.s -o obj/itoa.o

as -g printf_x86_64.s -o obj/printf_x86_64.o

ar -rcs lib/libc_x86_64.a obj/itoa.o obj/printf_x86_64.o 

#### Minimal x86_64 linker script
ld -melf_x86_64 -T ../toolchain/build/script/linker_script_minimal_x86_x64.ld obj/crt0_x86_64.o obj/fibonacci_x86_64.o lib/libc_x86_64.a -o bin/fibonacci

#### Default x86_64 linker script
ld -melf_x86_64 obj/crt0_x86_64.o obj/fibonacci_x86_64.o lib/libc_x86_64.a -o bin/fibonacci







