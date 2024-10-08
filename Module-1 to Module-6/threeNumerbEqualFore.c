// #include<stdio.h>
// int main(){
//     int a=0, b=0, c=0, d=0;
//     for(int i=0; i<4; i++){
//         scanf("%d %d %d %d", &a, &b, &c, &d);
//     }
//     if(a + b + c == d || a+b*c ==d || a*b+c ==d ||a*c+b == d || a*b*c == d || a-b+c == d || a-b*c == d || a-b*c == d || a-b*c == d){
//             printf("Yes\n");
//         }else{
//             printf("No\n");
//         }
// }



#include <stdio.h>

int main() {
    long long a, b, c, d;
    scanf("%lld %lld %lld %lld", &a, &b, &c, &d);
    
    // Check all possible ways to apply operators between a, b, c
    if ((a + b + c == d) || (a + b - c == d) || (a + b * c == d) ||
        (a - b + c == d) || (a - b - c == d) || (a - b * c == d) ) {
        printf("YES\n");
    } else {
        printf("NO\n");
    }
    
    return 0;
}