#include <stdio.h>

int main() {
    int n;

    scanf("%d", &n);

    int arr[n];

    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }


    int first = arr[0];
    for(int i = 0; i < n - 1; i++) { 
        arr[i] = arr[n - 1 - i]; 
    }

    arr[n - 1] = first; 

    printf("arr: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
