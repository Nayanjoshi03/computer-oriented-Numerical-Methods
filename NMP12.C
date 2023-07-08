#include<stdio.h>
#include<conio.h>
float y(float x)
{
    return(1/(1+x*x));
}
float simpson1(float a, float b, float n)
{
	int i;
	float se=0,so=0,s;
	float h=(b-a)/n;
	s=y(a)+y(b);
	for(i=1;i<n;i++)
	{
		if(i%2==0)
			se=se+2*y(a+i*h);
		else
			so=so+4*y(a+i*h);
	}
	return ((h/3)*(s+se+so));
}
void main()
{
	float x0=0,xn=6;
	int n=6;
	clrscr();
	printf("\n\nvalue of integral is %f\n\n",simpson1(x0,xn,n));
	getch();
}
