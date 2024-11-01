#include<stdio.h>
int main(){
    int N,M;

    scanf("%d %d", &N, &M);

    int A[N][M];
    
    for(int i=0; i<N; i++){
        for(int j=0; j<M; j++){
            scanf("%d", &A[i][j]);
        }
    }

    int X;
    scanf("%d", &X);

    int isexist =0;
    for(int i=0; i<N; i++){
        for(int j=0; j<M; j++){
            
            if(A[i][j] == X){
                isexist =1;
                break;
            }
        }
    }

    if(isexist){
        printf("will not take number");
    }
    else{
        printf("will take number");
    }


}