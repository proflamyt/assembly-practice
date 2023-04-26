# Hello World


### Assembly

First the syscall number is put in rax , i.e The "write" syscall in our case which is 1.

    ``` mov rax, 1 ```

Then the Arguments are put in the registers rdi, rsi, rdx, rcx, r8 and r9, in that order, since the write syscall expects the file descriptor, word and the message lenght. each of the arguments are placed respectively in these registers.


Then the syscall number is put in rax , i.e The "exit" syscall in our case which is 60.

    ``` mov rax, 60 ```

the first argument the exit syscall expects is placed in the rdi register (this tells if the program excutes succesffully or not) . 0 stands for EXIT_SUCCESS.


    ``` mov rdi, 0 ```

 ##### Assembly language program is dived into 3 sections:
 
 1. The Data Section
 2. BSS Secion
 3. Text Section
 
 **The Data Section**: This is the section where initialized data and constants are defined
 
 **The BSS Section**: This Section holds the uninitialized variables
 
 **Text Section**: This is where the actual program code is written
 
 
 ### C 
 signature

    ```
    ssize_t write(int fd, const void *buf, size_t count);
    ```

code 
```
write(1, "Hello, world!", 10); 
    exit(0);
```
