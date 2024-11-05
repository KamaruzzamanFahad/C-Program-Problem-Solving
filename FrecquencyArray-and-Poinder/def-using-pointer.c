#include<stdio.h>
int main(){
    int A,B;

    scanf("%d %d", &A, &B);

    int *pA = &A;
    int *pB = &B;

    int def = *pA - *pB;

    printf("%d", abs(def));



}