#include<stdio.h>
int main(){
    int T;
    scanf("%d", &T);
    long long M,A,B,C;

    

    for(int i=0; i<T; i++){
        scanf("%llu %llu %llu %llu", &M, &A, &B, &C);

       long long gunfol = A*B*C;

       if(gunfol == 0){
        if(M ==0){
            printf("0\n");
        }else{
            printf("-1\n");
        }
       }else{
        if(M% gunfol ==0){
            long long result = M/gunfol;
            printf("%llu\n", result);
        }else{
            printf("-1\n");
        }
       }
    }
}