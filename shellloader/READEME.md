# Running shellcodes using a function pointer

first generate a shellcode you'd like to run ; using msfvenom  i can generate a shellcode that runs calc.exe

Then this program takes the shellcode in a character array and casts the string to a function that takes no argument and returns an integer cause that is actually what the shellcode does,

then save it in a named function foo and call it 