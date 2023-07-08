#include<stdio.h>
#include<conio.h>
#include<math.h>
double f(double x, double y){
    return (1+(x*y));
}
void main(){
    int i;
    double y,x0,y0,xn,h;
    clrscr();
    printf("Enter the initial condition for y: ");
    scanf("%lf",&y0);
    printf("Enter the initial condition for x: ");
    scanf("%lf",&x0);
    printf("Enter the value of x for which y is required: ");
    scanf("%lf",&xn);
    printf("Enter the step-width h: ");
    scanf("%lf",&h);
    printf("x\t\ty\t\tf(x,y)\t\th*f(x,y)\ty+hf(x,y)\n");
    printf("__________________________________________________________________________\n");
    //Begin Euler Routine
    while(x0<xn){
	y=y0+h*f(x0,y0);
	printf("%lf\t%lf\t%lf\t%lf\t%lf\n",x0,y0,f(x0,y0),h*f(x0,y0),y);
	y0=y;
	x0=x0+h;
    }
    printf("%lf\t%lf\n",x0,y0);
    printf("__________________________________________________________________________\n");
    printf("The value of y is %lf\n\n",y);
getch();
}
