#include<stdio.h>
int main(){
    int N;
    scanf("%d", &N);

  for(int j =1; j <=N; j++){

     for (int i = 1; i <= 10; i++)
   {
    printf("%d * %d = %d \n", j, i, j*i);
   }


   printf("\n \n");
  }

   return 0;
   
}