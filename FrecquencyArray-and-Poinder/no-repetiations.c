#include<stdio.h>
int main(){
    int N;
       scanf("%d", &N);
       int A[N];

       for(int i=0; i<N; i++){
        scanf("%d", &A[i]);
       }

       int F[1000000] ={0};

       for(int i=0; i<N; i++){
        F[A[i]] += 1;
       }

       int count =0;

       for(int i=0; i<N; i++){
        if(F[A[i]] == 1){
            count++;
        }
       }

       printf("%d", count);
}