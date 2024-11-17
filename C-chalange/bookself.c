#include<stdio.h>
int main(){

    int totalself,quary;
    scanf("%d %d", &totalself, &quary);

    int self[totalself];

    for(int i=0; i<= quary; i++){
        int num =0;
        scanf("%d", &num);
        if(num ==1){
            int self = 0; 
            int pagenum =0;
            scanf("%d %d", &self, &pagenum);

            printf("%d", self, pagenum );
        }
        printf("\n");
    }
    
}