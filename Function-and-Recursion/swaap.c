#include<stdio.h>

void swaap (int *a, int *b){
        int temp = *a;
         *a = *b;
         *b = temp;
    }


int main(){
    int a,b;

    scanf("%d %d", &a, &b);
    swaap(&a,&b);
    printf("%d %d", a,b);
}