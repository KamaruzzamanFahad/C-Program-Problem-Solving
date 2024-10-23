#include <stdio.h>
int main(){
    int n;
    scanf("%d", &n);
    int arr[n];

    for(int i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }

    int b[n];

    for(int i=0; i<n; i++){
        b[i] = arr[i];
    }


    printf("arr: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");


    printf("b: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", b[i]);
    }
    printf("\n");

}