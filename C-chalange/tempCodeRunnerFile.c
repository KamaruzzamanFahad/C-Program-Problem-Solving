#include<stdio.h>
#include<string.h>

int main(){

    char str[1001];
    
    scanf("%s", str);

    int freq[26] = {0}; 
    int len = strlen(str);


    for (int i = 0; i < len; i++) {
        freq[str[i] - 'a']++;
    }


    int count = 0;
    for (int i = 0; i < 26; i++) {
        if (freq[i] % 2 != 0) {
            count++;
        }
    }

    int result = count >1 ? count-1 : count;

    printf("%d", count-1);
}