OUTPUT_FORMAT("elf32-i386")
OUTPUT_ARCH(i386)
ENTRY(_start)

SECTIONS
{
    . = SEGMENT_START("text-segment", 0x08048000) + SIZEOF_HEADERS;
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

