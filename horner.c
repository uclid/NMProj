#include<stdio.h>
#include<conio.h>
#include<math.h>

float p[6], ply[6], q[6];

float synth(int m, float r){
                int i;
                q[0] = p[0];
                for(i=1;i<=m;i++){
                                q[i] = (q[i-1]*r)+p[i];
                }
                return(q[m]);
}

void main(){
                clrscr();
                int m,i,flag=0;
                float r, x,x1, b0, c1;
                printf("\t\tHORNER'S METHOD");
                printf("\n Enter the highest degree of the equation (max 5): ");
                scanf("%d",&m);
                                for(i=0;i<=m;i++){
                                printf("\n Coefficient x[%d] = ",m-i);
                                scanf("%f",&p[i]);
                                ply[i] = p[i];
                                }
                printf("\n Enter the initial value x0 : ");
                scanf("%f",&r);
                x = r;
                do{
                   printf("\n%f\n",x);
                   b0 = synth(m,x);

                                for(i=0;i<=5;i++){
                                                p[i]=q[i];
                                }

                   c1 = synth(m-1,x);
                   printf("\n");
                   printf("\tb0 = %f\tc1= %f",b0,c1);
                   x1 = x - (b0/c1);
                   if(fabs(x1-x) <= 0.0009){
                                flag = 1;
                   }
                   x = x1;

                                for(i=0;i<=5;i++){
                                                p[i]=ply[i];
                                }

                   getch();
                }while(flag!=1);

                printf("\nApproximate root = %f", x1);
getch();

}
