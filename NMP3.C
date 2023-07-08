//Flase position methode 
#include<stdio.h>
#include<math.h>
#define f(x) x*x*x-2*x-5

void main(){
float a=2,b=2.5,temp,c1,c2,e=0.0001,x,y;
int count=1;
//clrscr();
do{
    x=f(b);
    y=f(a);
	c1=x-y;
	temp=a;
	c2=(a*x)-(b*y);
	a=c2/c1;
	printf("\nIteration %d",count);
	printf("\na= %f",a);
	printf("\nb= %f",b);
	count++;
}while(fabs(temp-a)>e);
printf("\nthe answer is : %f",a);
//getch();
}