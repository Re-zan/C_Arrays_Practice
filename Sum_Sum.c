#include<stdio.h>

int main(){
        int num, sum_of_positve_num=0,sum_of_negative_num=0 ;
     scanf("%d", &num);
     int arr[num];
     for (int i = 0; i < num; i++)
     {
        scanf("%d", &arr[i])  ;
     }
     for (int i = 0; i < num; i++)
     {

       if( arr[i] >0 ){
        sum_of_positve_num += arr[i];
        }else{
                sum_of_negative_num += arr[i];     
        }
     }
     printf("%d %d",sum_of_positve_num ,sum_of_negative_num );
        return 0;
}