#include <stdio.h>
#include <stdlib.h>
int main() {
    int N;
    scanf("%d",&N); 
    int *A= (int *)malloc(1 * sizeof(int)); 
    for (int i = 0; i < N; i++) {
        int num;
        scanf("%d", &num);

        A =(int *)realloc(A,(i+1)*sizeof(int));
        A[i]= num;
    }

    for (int i=0; i<N; i++) {
        printf("%d ", A[i]);
    }
    printf("\n");
    free(A); 
    return 0;
}
