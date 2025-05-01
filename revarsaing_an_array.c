#include<stdio.h>

int main(){
        int size;
        scanf("%d", &size);
        int array[size];
        for (int i = 0; i < size; i++)
        {
                scanf("%d", &array[i]);
        }
    
        for (int i = 0, j=size -1; i<j ; i++, j--)
        {
              
               int temp=array[i];
               array[i]=array[j];
               array[j]=temp;
        }
        for (int i = 0; i < size; i++)
        {
                printf("%d ", array[i]);   
        }
        return 0;
} 