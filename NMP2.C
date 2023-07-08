#include<stdio.h>
#include<conio.h>
#include<math.h>
#define f(x) x*x-12;
#define fd(x) 2*x;

void main(){
float x1=3.0,x2=0.0,temp=3.0,f1,fd1,e=0.001;
int count=1;
clrscr();
while(fabs(temp-x2)<e){
	f1=f(x1);
	fd1=fd(x1);
	x2=x1-(f1/fd1);
	printf("\nIteration %d",count);
	printf("\nx1 = %f",x1);
	printf("\nx2 = %f",x2);
	temp=x1;
	x1=x2;
	count++;
   if(count>=10){break;}
}
printf("\nthe answer is : %f",x2);
getch();
}
