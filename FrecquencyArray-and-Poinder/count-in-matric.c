#include<stdio.h>
int main(){

    int N,M,X;

    scanf("%d %d %d", &N, &M, &X);

    int A[N][M];

    for(int i=0; i<N; i++){
        for(int j=0; j<M; j++){
            scanf("%d", &A[i][j]);
        }
    }

    int Num[X];

    for(int i=0; i<X; i++){
        scanf("%d", &Num[i]);
    }

    int F[1001] = {0};

    for(int i=0; i<N; i++){
        for(int j=0; j<M; j++){
            F[A[i][j]] += 1;
        }
    }

    for(int i=0; i<X; i++){
        printf("%d\n", F[Num[i]]);
    }

    
}