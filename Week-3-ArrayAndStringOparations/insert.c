#include <stdio.h>
int main(){
    int n;

    scanf("%d", &n);

    int arr[10];

    for(int i=0; i<=n; i++){
        scanf("%d", &arr[i]);
    }
    n++;

    int index;
    int value;

    scanf("%d %d", &index, &value);

    printf("%d \n" ,n );

    for(int i=n-1; i>=index; i--){
        arr[i+1] = arr[i];
    }
    arr[index] = value;


    printf("arr: ");
    for (int i = 0; i<=n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

}