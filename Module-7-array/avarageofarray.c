#include<stdio.h>
int main(){
    int arr[10];

    for(int i=0; i<10; i++){
        scanf("%d", &arr[i]);
    }

    int sum = 0;

    for(int i=0; i<10; i++){
        sum = sum + arr[i];
    }
    int avg = sum / 10;
    printf("%d", avg);

}