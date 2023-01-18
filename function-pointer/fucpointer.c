#include <stdio.h>

int add (int a, int b)
{
    return a + b;
}

// returns function pointer that has two arguments
int (*select_operation()) (int, int)
{
    return add;

}

int main()
{
    int (*operation)(int, int) = select_operation();
    printf("%i", operation(2,2));

}