#include<stdio.h>
#include<conio.h>
#include<math.h>

#define f1(x,y,z)  (17-y+2*z)/20
#define f2(x,y,z)  (-18-3*x+z)/20
#define f3(x,y,z)  (25-2*x+3*y)/20

/* Main function */
int main()
{
 float x0=0, y0=0, z0=0, x1, y1, z1, e1, e2, e3, e=0.0001;
 int count=1;
 clrscr();
 do
 {
  /* Calculation */
  x1 = f1(x0,y0,z0);
  y1 = f2(x1,y0,z0);
  z1 = f3(x1,y1,z0);
  printf("iteration%d",count);
  printf("\nx = %.4f\n",x1);
  printf("y = %.4f\n",y1);
  printf("z = %.4f\n",z1);
  /* Error */
  e1 = fabs(x0-x1);
  e2 = fabs(y0-y1);
  e3 = fabs(z0-z1);

  count++;

  /* Set value for next iteration */
  x0 = x1;
  y0 = y1;
  z0 = z1;

 }while(e1>e && e2>e && e3>e);

 printf("\nSolution: x=%0.3f, y=%0.3f and z = %0.3f\n\n",x1,y1,z1);

 getch();
 return 0;
}

