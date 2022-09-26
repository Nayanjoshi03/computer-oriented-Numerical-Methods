#include<stdio.h>
#include<conio.h>
#include<dos.h>
#define f(x) (x*x*x)-x-1

void main(){
int count=0;
float x1=1.0,x2=1.5,x3,f1,f2,f3,e=0.0001;
clrscr();
f1=f(x1);
f2=f(x2);
while(((x1-x2)>e)||((x2-x1)>e)){
	x3=(x1+x2)/2;
	f3=f(x3);
	printf("\niteration number %d",count);
	printf("\nx1=%f",x1);
	printf("\nx2=%f",x2);
	if(f3>0){
		x2=x3;
		count++;
	}
	else{
		x1=x3;
	}
	printf("\nx3=%f",x3);
	delay(3000);
if(count>20){    //this code is to prevent the infinite loop
	break;
}
}
printf("\n the answer is %f \n ",x3);
getch();
}