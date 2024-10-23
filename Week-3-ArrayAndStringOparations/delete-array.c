#include <stdio.h>
int main(){
    int n;

    scanf("%d", &n);

    int arr[10];

    for(int i=0; i<=n; i++){
        scanf("%d", &arr[i]);
    }

    int index;

    scanf("%d", &index);

    printf("%d \n" ,n );

    for(int i=index; i < n; i++){
        arr[i] = arr[i+1];
    }


    printf("arr: ");
    for (int i = 0; i<n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

}