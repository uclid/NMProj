#include<stdio.h>
#include<conio.h>
#define MAX 10

void main(){
  clrscr();
  float x[MAX+1], fx[MAX+1], num, den, val, y=0;
  int i, j, n;

  printf("\t\tLAGRANGE'S INTERPOLATION");
  printf("\n\nEnter the degree of interpolation(n): ");
  scanf("%d", &n);
  
  for(i=0; i<=n; i++){
    printf("\n x%d: ",i);
    scanf("%f", &x[i]);
    printf("\n fx%d: ",i);
    scanf("%f", &fx[i]);
  }
  
  printf("\nEnter x to estimate fx: ");
  scanf("%f", &val);

  for (i=0; i<=n; i++){
    num=1;
    den=1;
    for (j=0; j<=n; j++)
      if(j!=i){
        num *= val-x[j];
        den *= x[i]-x[j];
      }
    y+=(num/den)*fx[i];
  }

  printf("\nApproximate value at %.3f: %.3f",val,y);
  getch();
}
