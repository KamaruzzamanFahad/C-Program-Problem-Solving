#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{

    int n;
    scanf("%d", &n);
  	int partern = n+n-1;


    for(int i=0; i< partern; i++){
        printf("%d ",n);

        for(int i=0; i<partern; i++){
            printf("%d\n", n);
        }
    }

    return 0;
}