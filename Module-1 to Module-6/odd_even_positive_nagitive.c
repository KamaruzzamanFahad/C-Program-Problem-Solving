#include<stdio.h>
int main(){
    int N;
    scanf("%d", &N);

    int even=0,odd=0,positive=0,nagitive =0;

    for(int i = 1; i <=N; i++){
        int X;
        scanf("%d", &X);
        if(X%2==0){
            even++;
        }else{
            odd++;
        }

        if(X>0){
            positive++;
        }else if(X<0){
            nagitive++;
        }
    }

        printf("Even: %d\n", even);
        printf("Odd: %d\n", odd);
        printf("Positive: %d\n", positive);
        printf("Negative: %d\n", nagitive);

        return 0;   
}

// Even: 3
// Odd: 2
// Positive: 1
// Negative: 3