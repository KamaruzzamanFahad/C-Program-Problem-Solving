#include<stdio.h>
#include<string.h>
int main(){
    // int N, X, Y;
    // scanf("%d %d %d", &N, &X, &Y);

    // int P[N];
    // for(int i=0; i<N; i++){
    //     scanf("%d", &P[i]);
    // }
    

    
    // int count=0;
    // for(int i =0; i<N; i++){
    //     if(P[i] >= X && P[i] <= Y){
    //         count++;
    //     }
    // }
    // printf("%d", count);


    // int N;
    // scanf("%d", &N);

    // int C;
    // for(int i=0; i<N; i++){
    //     scanf("%d", &C);

    //     if(C<1){
    //         printf("Entry-level candidate\n");
    //     }else if(C>=1 && C<=3){
    //         printf("Junior candidate\n");
    //     }else if(C>=4 && C<=7){
    //         printf("Mid-level candidate\n");
    //     }else if(C > 7){
    //         printf("Senior candidate\n");
    //     }
    // }

    char S1[10001], S2[10001], S3[10001];
    scanf("%s %s %s", &S1, &S2, &S3);


    char min[10001], max[10001];

    strcpy(min, S1);
    strcpy(max, S1);

    if(strcmp(S2, S3) > 0 && strcmp(S2, S1) > 0){
        strcpy(max, S2);        
    }else if (strcmp(S3, S2) > 0 && strcmp(S3, S1) > 0){
        strcpy(max, S3);
    }

    if(strcmp(S2, S3) < 0 && strcmp(S2, S1) < 0){
        strcpy(min, S2);        
    }else if (strcmp(S3, S2) < 0 && strcmp(S3, S1) < 0){
        strcpy(min, S3);
    }

    printf("%s\n", min);
    printf("%s\n", max);




}