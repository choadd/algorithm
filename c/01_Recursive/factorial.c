#include <stdio.h>

int factorial(int num)
{
    if (num == 0)
        return 1;
    else
        return num * factorial(num-1);
}

int main(void)
{
    int num = 3;
    printf("factorial %d! : %d\n", num, factorial(3));
    
    return 0;
}