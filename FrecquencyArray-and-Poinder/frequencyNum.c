#include<stdio.h>
int main(){
    int N,M;
    scanf("%d", &N);
    
    scanf("%d", &M);

    int f[M+1];

    int A[N];
    

    for(int i=0; i<N; i++){
        scanf("%d", &A[i]);
    }

    for(int i=0; i<=M; i++){
        f[i] = 0;
    }
    

    for(int i=0; i<N; i++){
        f[A[i]] += 1;
    }

    for(int i=1; i<=M; i++){
        printf("%d\n", f[i]);
    }
}