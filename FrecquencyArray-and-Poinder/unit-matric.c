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
    
    int one = 1;
    int zero =0;
    for(int i=0; i<N; i++){
        
        for(int j=0; j<N; j++){

        if( i==j && A[i][j] != 1 ){
            one=0;
        }


        if(i!=j && A[i][j] != 0){
            zero = 1;
        }
        }
    }

    if(one ==1 && zero ==0){
        printf("YES");
    }else{
         printf("NO");
    }
}