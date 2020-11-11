
#include <stdio.h>
#include <stdlib.h>
#include "math_functions.h"


int main(void)
{

	char input;
	int A;
	int B;


	printf("*******************************************\n");
	printf("**		  calculator          **\n");
	printf("*******************************************\n");
	

	while(1)
	{
		printf("\nSum A+B (+)\n");
		printf("Subtraction A-B (-)\n");
		printf("Multiply A*B (*)\n");
		printf("Division A/B (/)\n");
		printf("Pow A^B (^)\n");
		printf("Quit (0)\n");
		printf("Choose one option: ");
		scanf("%c", &input);


		if (input == '0')
		{
			printf("Exiting!\n");
			system("clear");
			return 0;
		}

		printf("A value: ");
		scanf("%d", &A);
		printf("B value: ");
		scanf("%d", &B);
		

		switch(input)
		{
			case '+': 
			{
				printf("%d + %d = %d\n", A, B, my_sum(A,B));
			}break;

			case '-': 
			{
				printf("%d - %d = %d\n", A, B, my_sub(A,B));
			}break;

			case '*': 
			{
				printf("%d * %d = %d\n", A, B, my_mult(A,B));
			}break;

			case '/': 
			{
				printf("%d / %d = %f\n", A, B, my_div(A,B));
			}break;

			case '^': 
			{
				printf("%d ^ %d = %d\n", A, B, my_pow(A,B));
			}break;			
		}
	}

	return 0;
}