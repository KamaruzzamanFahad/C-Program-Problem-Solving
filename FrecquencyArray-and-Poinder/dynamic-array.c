#include<stdio.h>
int main(){
    int N;

    scanf("%d", &N);
    int len=1;
    int A[len];

    for(int i=0; i<N; i++){
        len++;
        scanf("%d", A[i]);
        
    }

    for(int i=0; i<N; i++){
        printf("%d ", A[i]);
}


}