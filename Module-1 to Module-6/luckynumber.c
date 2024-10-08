#include <stdio.h>

int main() {
    int N = 0;
    scanf("%d", &N);
    
    int first = N / 10;
    int second = N % 10; 


    if ((first != 0 && second % first == 0) || (second != 0 && first % second == 0)) {
        printf("YES\n");
    } else {
        printf("NO\n");
    }

    return 0; 
}
