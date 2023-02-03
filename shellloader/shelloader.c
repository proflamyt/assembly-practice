#include <stdio.h>

// msfvenom -p windows/x64/exec CMD=calc.exe -f raw | xxd -i

unsigned char code[] = "\x7"; // generate cmd : calc.exe using msfvenom

int main()
{
   int returnval = 0;
   int (*foo)() = (int(*)()) code ;

   returnval = foo();
   printf("%i", returnval);

}