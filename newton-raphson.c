#include<stdio.h>
#include<conio.h>
#include<math.h>
#define f(x) x*x-4*x-10
#define fd(x) 2*x-4
#define E 0.0005
void main(){

clrscr();

float x0, x1, f0, fd0, e;

printf("\t\t\t-----NEWTON-RAPHSON METHOD-----");
printf("\n\n FINDING ROOT OF X^2-4X-10");

printf("\n Enter the initial value: ");
scanf("%f", &x0);

printf("\n f(x0)\t\tfd(x0)\t\tx1\t\tError");
printf("\n -----------------------------------------------------");

begin:
f0 = f(x0);
fd0 = fd(x0);
x1 = x0 - (f0/fd0);
e =fabs((x1-x0)/x1);

                if( e < E){
                                printf("\n\n Approximate Root = %.5f", x1);
                }
                else{
                                printf("\n %.2f\t\t%.3f\t\t%.3f\t\t%.4f",f(x0),fd(x0),x1,e);
                                x0 = x1;
                                goto begin;
                }

getch();

}
