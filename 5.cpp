#include <stdio.h>
#include <stdlib.h>
    void aar(float n);
    int main() {
    float n=0;
    printf(" ingrese el numero ");
    scanf("%f",&n);
    aar(n);
    }

    void aar (float n){
        float a=0;
        a=n/8;
        printf("\n la octava parte de %f es %f ",n,a);
    }
