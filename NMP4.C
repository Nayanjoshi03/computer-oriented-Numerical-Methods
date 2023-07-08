//secant methode
#include<stdio.h>
#include<conio.h>
#include<math.h>
#define f(x) x*x*x*x-x-10

void main(){
float a=2,b=2.5,temp,c1,c2,e=0.0001,x,y;
int count=1;
clrscr();
do{
	x=f(b);
	y=f(a);
	c1=x-y;
	c2=(a*x)-(b*y);
	temp=c2/c1;
	printf("\nIteration %d",count);
	printf("\na= %f",a);
	printf("\nb= %f",b);
	count++;
	a=b;
	b=temp;
}while(fabs(a-b)>e);
printf("\nthe answer is : %f",a);
getch();
}
