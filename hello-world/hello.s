global _start

section .text

_start:
  mov rax, 1        
  mov rdi, 1        
  mov rsi, msg     
  mov rdx, msglen   
  syscall          

  mov rax, 60       ; exit(
  mov rdi, 0        ;   EXIT_SUCCESS
  syscall           ; );

section .rodata
  msg: db "Hello, world!", 10
  msglen: equ $ - msg