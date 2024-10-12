#include<stdio.h>
int main(){
    // int arr[] = {1,2,3,4,5,6};
    // printf("%d", arr[5]);

    int a[5];
    for(int i=0; i<5; i++){
        scanf("%d", &a[i]);
    }
    int sum =0;
    for(int i = 0; i<5; i++){
        sum = sum + a[i];
    }
        printf("sum of array is : %d\n", sum);
        

    return 0;
}