#include “main.h”

/**
*largest_number – returns the largest of 3 numbers
* @a; first integer
* @b; second integer
* @c; third integer
* Return; largest number
*/

Int largest_number(int a, int b, int c)

	int largest;
	if (a > b && a > c)
	{
		Largest = a;
	}
	Else if  (a > b && c > a)
	{
		largest = c;
	}
	else if (b > c)
	{
		largest = b;
	}
	else
 	{
		largest = c;
	}
return (largest);


