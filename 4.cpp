#include <stdio.h>
#include <stdlib.h>
    void aar();

    int main( ) {
    int r1=0,r2=0,r3=0,r4=0,r5=0;
    printf("ingrese una resistencia ");
    scanf("%d",&r1);
    printf("ingrese una resistencia ");
    scanf("%d",&r2);
    printf("ingrese una resistencia ");
    scanf("%d",&r3);
    printf("ingrese una resistencia ");
    scanf("%d",&r4);
    printf("ingrese una resistencia ");
    scanf("%d",&r5);
    aar(r1,r2,r3,r4,r5);
    }

    void aar(int r1, int r2, int r3, int r4, int r5){
    int t=0;
    t=r1+r2+r3+r4+r5;
    printf(" la resistencia total es  %d ",t );
    printf("las resistencias son r1 %d, r2 %d , r3 %d, r4 %d, r5 %d ",r1,r2,r3,r4,r5);

    }
