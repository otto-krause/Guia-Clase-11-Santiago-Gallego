#include <stdio.h>
#include <stdlib.h>
    void aar(float a, float b);
    int main() {
    float a=0,b=0;
    printf("\n  ingrese la fuerza ");
    scanf("%f",&a);
    printf("\n  ingrese la superficie ");
    scanf("%f",&b);
    aar(a,b);
    }

    void aar(float a, float b){
    float c=0;
    c=a/b;
    printf("\n  la presion es %f ",c);
    }
