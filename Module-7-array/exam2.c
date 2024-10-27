#include<stdio.h>
int main(){
    //Babul's Vowels problem colve in c progream 
    char ch ;
    scanf("%c", &ch);
    if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u'){
        printf("Vowel");
    }else{
        printf("Consonant");
    }



// c program Zeros and Ones 01 problem solved
    int N;
    scanf("%d", &N);

    int arr[N];
    int zero =0;
    int one =0;
    for(int i=0; i<N; i++) {
        scanf("%d", &arr[i]);
    }
    for(int i = 0; i<N ; i++ ){
        if(arr[i] == 0){
            zero++;
        }else if(arr[i] == 1 ){
        one++;
    }
    }
    printf("%d %d", zero, one);


//Zeros and Ones 02 c program problem solved
    int N;
    scanf("%d", &N);
    int arr[N];
    for(int i=0; i<N; i++){
        scanf("%d", &arr[i]);
    }
    int X;
    scanf("%d", &X);

    for(int i=0; i<N; i++){

        if(i == X-1){
            if(arr[i] == 1){
                printf("%d ", 0);
            }
            else{
                printf("%d ", 1);
            }
        }
        else{
            printf("%d ", arr[i]);
        }
        
    }


// c program Pattern again problem solved
    int N;
    scanf("%d", &N);
    for (int i=1; i<=N; i++) {
        for (int j= 1; j <= i; j++) {
            printf("%d",j);
        }
        printf("\n");

    }
    for (int i=N-1; i>=1; i--) {
        for (int k = 1; k<=N-i; k++) {
            printf(" ");
        }
        for (int j=1; j<=i; j++) {
            printf("%d",j);
        }

        printf("\n");
    }

// c program Salami again problem solved
    int N;
    scanf("%d", &N);

    int arr[N];
    for(int i=0; i<N; i++){
        scanf("%d", &arr[i]);
    }
    int max = arr[0];
    for(int i=0; i<N; i++){
        if(max < arr[i]){
            max = arr[i];
        }
    }

    for(int i=0; i<N; i++){
        printf("%d ", max - arr[i]);
    }
   
}
