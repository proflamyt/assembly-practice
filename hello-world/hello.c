#include <unistd.h>
int main()
{
write(1, "Hello, world!", 10); 
exit(0);
}