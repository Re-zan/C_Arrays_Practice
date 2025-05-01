#include<stdio.h>

int main(){
        int  index=5, num=30;
       
        int array[5];
        for (int i = 0; i < 5; i++)
        {
                scanf("%d", &array[i]);
        }
        for (int i = 5; i >=index +1; i--)
        {
                array[i]=array[i -1];
               
        }
        array[index]=num;
        for (int i = 0; i < 6; i++)
        {
                printf("%d\n", array[i]);
        }
        return 0;
}