#include <stdio.h>

int fibo(int num)
{
    if(num == 1)
        return 0;
    else if(num == 2)
        return 1;
    else 
        return fibo(num-1) + fibo(num-2);
}

int main(void)
{
    int range = 10;
    for(int i=1; i<=range; i++){
        printf(" %d ",fibo(i));
    }
    printf("\n");
    
    return 0;
}