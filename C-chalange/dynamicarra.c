#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int n;
    scanf("%d", &n);

    int *array = (int*)malloc(n * sizeof(int));

    for(int i=0; i<n; i++){
        scanf("%d", &array[i]);
    }

    int sum=0;
    for(int i=0; i<n; i++){
        sum+=array[i];
    }
    printf("%d", sum);

    free(array);

    return 0;
}