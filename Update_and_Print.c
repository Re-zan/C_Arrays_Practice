
#include<stdio.h>

int main(){
        int num, x, y ;
     scanf("%d", &num);
     int arr[num];
     for (int i = 0; i < num; i++)
     {
        scanf("%d", &arr[i])  ;
     }
     scanf("%d %d", &x, &y);

     for (int i = num -1; i >=0; i--)
     {
        if(i ==x){
                arr[x]= y;
        }
        printf("%d ",arr[i]);
     }
        return 0;
}