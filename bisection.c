#include<stdio.h>
#include<conio.h>
#include<math.h>
#define f(x) x*x*x-2*x-5 //define the function here

void main(){
  clrscr();
  float x1 = 2, x2 =3, E=0.0005, x0; //define initial values and errors here
  float f1 = f(x1), f2 = f(x2), f0;
  float root;

                if(f1*f2>0){
                                goto last;
                }

  printf("\n\t\t\tBISECTION METHOD");
  printf("\n\n  FINDING ROOT OF x^3-2x-5");
  printf("\n\n  X1\t  X2\t  X0\tf(X0)\t  Error");
  printf("\n  -------------------------------------");
  
  back:

  x0 = (x1+x2)/2;
  f0 = f(x0);
  printf("\n  %.3f\t%.3f\t%.3f\t%.3f\t%.5f",x1,x2,x0,f(x0),fabs((x2-x1)/x2));
  //print in tabular form
                if(f1*f0<0){
                                x2= x0;
                }
                else{
                                x1=x0;
                                f1=f0;
                }

                if(fabs((x2-x1)/x2)<E){
                                root = (x1+x2)/2; //display root if required precision is met
                                printf("\n\n  Approximate Root = %.5f", root);
                                goto last;
                }
                else{
                                goto back;
                }
  
  last:
  
  getch();
}
