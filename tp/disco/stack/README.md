Analysis of stack allocations - 32bits compiling 
======================

gcc -S -fno-asynchronous-unwind-tables -fno-pie -fno-stack-protector -fcf-protection=none -Wall -m32 main.c 

gcc -S -fno-asynchronous-unwind-tables -fno-pie -fno-stack-protector -fcf-protection=none -Wall -m32 local_variable_init.c

gcc -S -fno-asynchronous-unwind-tables -fno-pie -fno-stack-protector -fcf-protection=none -Wall -Wall -m32 local_variable_uninit.c


Analysis of stack allocations - 64bits compiling
======================

gcc -S -fno-asynchronous-unwind-tables -fno-pie -fno-stack-protector -fcf-protection=none -Wall function_parameters.c

gcc -S -fno-asynchronous-unwind-tables -fno-pie -fno-stack-protector -fcf-protection=none -Wall function_inlining.c

gcc -S -O1 -fno-asynchronous-unwind-tables -fno-pie -fno-stack-protector -fcf-protection=none -fno-stack-protector -Wall function_inlining.c


GCC Additional options to invalidate security add-on processing
======================

-fno-asynchronous-unwind-tables -fno-pie -fno-stack-protector -fcf-protection=none 


