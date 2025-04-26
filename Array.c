#include<stdio.h>

int main(){
        int size;
        scanf("%d", &size);
        int arrray[size];
      for (int i = 0; i <size ; i++)
      {
        scanf("%d", &arrray[i]);
      }
      for (int i = size -1; i >=0 ; i--)
      {
        printf("%d\n", arrray[i]);
      }
    
        return 0;
}