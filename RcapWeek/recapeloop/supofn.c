#include<stdio.h>
int main(){
    long long N;
    scanf("%lld", &N);
    
    printf("%lld",  ((N + 1) * N) / 2);
    return 0;
}