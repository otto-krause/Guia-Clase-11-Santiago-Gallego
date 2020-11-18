#include <stdio.h>
#include <stdlib.h>
    void aar();
    int main() {
    int n,n1;
    printf(" ingrese un numero : ");
    scanf("%d",&n);
    printf("\n ingrese otro numero : ");
    scanf("%d",&n1);
    aar(n,n1);
    }

    void aar(int n, int n1){
        if (n>n1) {
            printf("\n %d es mayor a %d ",n,n1);
        }else if(n1>n){
            printf("\n %d es mayor a %d ",n1,n);
        } else{
            printf("\n %d es igual a %d ",n,n1);
        }

    }
