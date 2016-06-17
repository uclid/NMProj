#include<iostream.h>
#include<conio.h>
#include<math.h>
#define EPS 0.000001
#define MAXIT 20
#define F(x) (x)*(x)*(x)+(x)*(x)-3*(x)-3
#define FD(x) 3*(x)*(x)+2*(x)-3

void main(){
 clrscr();
 int count;
 float x0, xn, fx, fdx, fxn;
 cout<<"             NEWTON RAPHSON'S METHOD";
   cout<<endl<<"x^3+x^2-3x-3";
 cout<<endl<<"Enter the initial value of x:";
 cin>>x0;
 count=1;

 begin:
  fx=F(x0);
  fdx=FD(x0);
  xn=x0-fx/fdx;
  if (fabs((xn-x0)/xn) < EPS){
   cout<<"Approximate Root: "<<xn<<endl;
   fxn =F(xn);
   cout<<"Functional Value: "<<fxn<<endl;
   cout<<"No. of Iterations: "<<count<<endl;
  }
  else{
   x0=xn;
   count=count+1;
   if(count<MAXIT){
    goto begin;
   }
   else{
   cout<<"SOLUTION DOES NOT CONVERGE!!"<<endl;
   cout<<"Iterations: "<<MAXIT<<endl;
   }
  }
 getch();
}
