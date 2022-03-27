Analysis of limits of system
======================

gcc stack_overflow.c -o stack_overflow

gcc heap_overflow.c -o heap_overflow


Analysis of exceptions and Unix signals
======================

gcc except_readonly.c -o except_readonly

gcc except_null_pointer.c -o except_null_pointer

gcc signal_handler.c -o signal_handler

gcc -S -fno-asynchronous-unwind-tables -fno-pie -fno-stack-protector -fcf-protection=none -Wall signal_handler.c


Others examples of exceptions
======================

gcc except_division_zero.c -o except_division_zero

gcc except_bus_error.c -o except_bus_error

gcc except_sigtrap.c -o except_sigtrap

