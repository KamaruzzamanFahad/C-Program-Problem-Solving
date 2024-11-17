#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    char str[10000];

    int fq[10] ={0};

    scanf("%s", str);
int i=0;

    while(str[i] != '\0'){
        if(str[i] >= '0' && str[i] <= '9'){
            int degit = str[i] -'0';
            fq[degit] +=1;
        }
        i++;
    }

    for(int i=0; i<10; i++){
        printf("%d ", fq[i]);
    }

}