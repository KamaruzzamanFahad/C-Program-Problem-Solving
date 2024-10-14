#include<stdio.h>
int main(){
    // for(int i=0; i<6; i++){
    //     for(int j=1; j<=i; j++){
    //         printf("%d ", j);
    //     }
    //     printf("\n");
    // }


    // for(int i=5; i >=1; i--){
    //     for(int j=1; j<=i; j++){
    //         printf("%d ", i+1-j);
    //     }
    //     printf("\n");
    // }

    // int n= 6;

    // for(int i=1; i<=n; i++){
    //     for(int j=0; j<i; j++){
    //         printf("%c ", i+64);
    //     }
    //     printf("\n");
    // }


    // int n= 5;

    // for(int i=1; i<=n; i++){

    //     for(int j=n; j<; j++){
    //         printf("* ");
    //     }
    //     // for(int j=1; j<=i; j++){
    //     //     printf("* ");
    //     // }
    //     printf("\n");
    // }



    int N;
    scanf("%d", &N);
    int arr[N];
    int sum=0;

    for(int i=0; i<N; i++){
        scanf("%d", &arr[i]);
    }
    
     for(int i=0; i<N; i++){
        sum = sum+arr[i];
    }
    if(sum < 0){
        printf("%d", sum*-1);
    }else{
    printf("%d", sum);
    }

}