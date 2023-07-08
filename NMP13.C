#include<stdio.h>
#include<conio.h>
float y(float x)
{
    return(1/(1+x*x));
}
float simpson3(float a, float b, float n)
{
	int i;
	float s1=0,s2=0,s;
	float h=(b-a)/n;
	s=y(a)+y(b);
	for(i=1;i<n;i++)
	{
		if(i%3==0)
			s1=s1+2*y(a+i*h);
		else
			s2=s2+3*y(a+i*h);
	}
	return (((3*h)/8)*(s+s1+s2));
}
void main()
{
	float x0=0,xn=6;
	int n=6;
	clrscr();
	printf("\n\nvalue of integral is %f\n\n",simpson3(x0,xn,n));
	getch();
}
