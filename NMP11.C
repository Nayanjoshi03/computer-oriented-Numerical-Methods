#include<stdio.h>
#include<conio.h>

float y(float x)
{

	return 1/(1+x*x);
}

float trapezoidal(float a, float b, float n)
{
	int i;

	float h = (b-a)/n;

	// Computing sum of first and last terms
	// in above formula
	float s = y(a)+y(b);

	// Adding middle terms in above formula
	for ( i = 1; i < n; i++)
		s += 2*y(a+i*h);

	// h/2 indicates (b-a)/2n. Multiplying h/2
	// with s.
	return (h/2)*s;
}

// Driver program to test above function
void main()
{
	// Range of definite integral
	float x0 = 0;
	float xn = 6;


	// Number of grids. Higher value means
	// more accuracy
	int n = 6;
	clrscr();
	printf("Value of integral is %6.4f\n\n\n",trapezoidal(x0, xn, n));
	getch();
}
