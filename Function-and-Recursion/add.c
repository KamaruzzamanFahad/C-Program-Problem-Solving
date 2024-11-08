#include<stdio.h>
int main(){

    int add(int a, int b) {
        int sum = a+b;
        return sum;
    };


    int a,b;
    scanf("%d %d", &a,&b);

    printf("%d", add(a,b));


}