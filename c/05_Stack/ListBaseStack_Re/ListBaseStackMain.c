#include <stdio.h>
#include "ListBaseStack.h"

int main(void)
{
	Stack stack;
	StackInit(&stack);

	SPush(&stack, 1);  
	SPush(&stack, 2);

	while(!SIsEmpty(&stack))
		printf("%d ", SPop(&stack)); 

	return 0;
}