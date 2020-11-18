#include <stdio.h>
#include <stdlib.h>
  void aar();
  void per();
    int prim(int a, int b, int c, int d);

        int main( ) {
            int a=0,b=0,r=0;
            printf(" ingrese un numero ");
            scanf("%d",&a);
            printf(" ngrese otro numero ");
            scanf("%d",&b);
            aar(a,b);
            pero(a,b);
        }

    void aar(int a, int b)
    {
        int c=0;
        c=a*b;
        printf(" el area de los dos numeros es : %d ",c);
    }

    void per(int a, int b)
    {
        int d=0;
        d=(2*a)+(2*b);
        printf(" el perimetro de los dos numeros es : %d",d);
    }
