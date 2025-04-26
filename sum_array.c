#include<stdio.h>

int main(){
        int size, sum=0;
        scanf("%d", &size);
        int arrray[size];
      for (int i = 0; i <size ; i++)
      {
        scanf("%d", &arrray[i]);
      }
      for (int i = 0; i <size ; i++)
      {
        sum+=arrray[i] ;
      }
      printf("%d\n", sum);
        return 0;
}