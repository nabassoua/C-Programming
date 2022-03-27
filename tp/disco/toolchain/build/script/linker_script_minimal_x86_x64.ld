OUTPUT_FORMAT("elf64-x86-64")
OUTPUT_ARCH(i386:x86-64)
ENTRY(_start)

SECTIONS
{
	. = SEGMENT_START("text-segment", 0x400000) + SIZEOF_HEADERS;
	.text :
    {
        *(.text)
    }
    .rodata : 
	{ 
        *(.rodata) 
    }
    .data :
    {
        *(.data)
    }
    .bss :
    {
        *(.bss)
    }
    /DISCARD/ : 
	{ 
        *(.comment)
        *(.note.GNU-stack)
        *(.eh_frame)
    }
}

