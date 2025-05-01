#include<stdio.h>

int main(){
        int  index, size;
        scanf("%d", &size);
        int array[size];
        for (int i = 0; i < 5; i++)
        {
                scanf("%d", &array[i]);
        }
     
        scanf("%d", &index);
        for (int i = 0; i < size; i++)
        {
                
                if(i == index){
                        array[i] =array[i +1];
                }
                 
        }
        const value= size<index?size:size -1; 
        for (int i = 0; i < value; i++)
        {
                printf("%d %d\n", array[i], i);   
        }
        return 0;
}