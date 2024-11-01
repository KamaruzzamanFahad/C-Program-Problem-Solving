#include<stdio.h>
int main(){
    int N;
    scanf("%d", &N);
    int arr[N];
    
    for(int i=0; i<N; i++){
        scanf("%d", &arr[i]);
    }

    int fqarr[10000] = {0};

    for(int i=0; i<N; i++){
       fqarr [arr[i]] += 1;
    }

    for(int i=0; i<N; i++){
        printf("%d ", fqarr[i]);
    }

    printf("\n%d", fqarr[4]);
}