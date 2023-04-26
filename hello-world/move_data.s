
.section .data

.section .bss
    .lcomm buffer 1


.section .text
    .global _start

_start:
    nop

move_data:
    movl $100, %eax
    movl $0x50, buffer

exit:
    movl $1, %eax
    movl $0, %ebx
    int $0x80