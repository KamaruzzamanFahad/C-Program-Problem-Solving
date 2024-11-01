#include<stdio.h>
int main(){
    // char str[] = "hello im fahad";
    // printf("%s", str);

    // char name[20];
    // scanf("%[^\n]s", name);

    // printf("%s", name);

    char bio[10];
    fgets(bio, sizeof(bio), stdin);

    printf("%s", bio);

    
}