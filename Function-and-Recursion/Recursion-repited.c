#include<stdio.h>
int n;
int i=0;

void rec(){
        if(i >= n){
            return;
        }
        printf("I love Recursion\n");
        i++;
        rec();
    }

int main(){
    scanf("%d", &n);

    rec();
}