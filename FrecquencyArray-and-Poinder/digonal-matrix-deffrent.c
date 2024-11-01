#include<stdio.h>
int main(){
    int N; 
    scanf("%d", &N);

    int A[N][N];

    for(int i=0; i<N; i++){
        for(int j=0; j<N; j++){
            scanf("%d", &A[i][j]);
        }
    }


    int sumX =0;
    int sumY=0;

    for(int i=0; i<N; i++){
        for(int j=0; j<N; j++){
            if(i==j){
                sumX += A[i][j];
            }
            if(i+j == N-1){
                sumY += A[i][j];
            }
        }
    }

    printf("%d", abs(sumX-sumY));
}