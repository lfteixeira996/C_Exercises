#include <stdio.h>

/*
 * print Fahrenheit-celsius table
 * fahr = 0,..., 300
 *
*/

int main(void)
{

	int start = 0;
	int step = 20;
	int end = 300;
	unsigned char c;

	
	puts("Choose the loop: w(while), f(for), d(do...while)");
	c = getchar();

	switch(c)
	{
		case 'w':
		{
			printf("While Loop\n");

			/*while implementation*/
			while(start <= end)
			{
				printf("\t%dF \t%dC\n", start, 5*(start-32)/9);
				start = start + step;
			}
			
		}break;	


		case 'f':
		{
			printf("For Loop\n");

			/*for implementation*/
			for (start; start <= end; start=start+step)
			{
				printf("\t%dF \t%dC\n", start, 5*(start-32)/9);
			}
			
		}break;


		case 'd':
		{

			printf("Do...While Loop\n");

			do
			{	
				printf("\t%dF \t%dC\n", start, 5*(start-32)/9);
				start = start + step;

			}while(start <= end);
		
		}break;
	}


	return 0;
}