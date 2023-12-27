#include <stdio.h>
#include "PostCalculator.h"

int main(void)
{
	char postExp1[] = "22*8+";
	char postExp2[] = "12+*4/";

	printf("%s = %d \n", postExp1, EvalRPNExp(postExp1));
	printf("%s = %d \n", postExp2, EvalRPNExp(postExp2));

	return 0;
}