#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num, *arr, i;
    scanf("%d", &num);
    arr = (int*) malloc(num * sizeof(int));
    for(i = 0; i < num; i++) {
        scanf("%d", arr + i);
    }




    for(int i=0; i<num; i++){
        int temp = arr[i];
        arr[i] = arr[i-num];
    }

    for(i = 0; i < num; i++)
        printf("%d ", *(arr + i));
    return 0;
}