#include<stdio.h>
#include<string.h>
int main(){
    char S[10000000];

    scanf("%s", S);

    int len = strlen(S);

    int f[26] = {0};

    for(int i=0; i<len; i++){
       int index = S[i] - 'a';
       f[index] += 1;
    }

    for(int i=0; i<26; i++){
        if(f[i] >0 ){
            printf("%c : %d\n", i + 'a', f[i]);
        }
        
    }
}