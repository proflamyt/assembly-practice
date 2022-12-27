global _start

section .text

_start:
  mov rax, 1        
  mov rdi, 1        
  mov rsi, txt     
  mov rdx, txtlen   
  syscall          

  mov rax, 60       ; exit(
  mov rdi, 0        ;   EXIT_SUCCESS
  syscall           ; );

section .rodata
  txt: db "Hello, world!", 10
  txtlen: equ $ - msg