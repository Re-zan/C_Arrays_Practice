#include<stdio.h>

int main(){
        int size, search_num ;
       char flag='N';

     scanf("%d", &size);
     int sadia[size];

     for(int i=0; i<size;i++ ){
        scanf("%d", &sadia[i]);
     }

     scanf("%d", &search_num);

     for(int i=0; i<size;i++ ){
        if(search_num ==sadia[i]){
               flag='Y';
               break;
        }
     }
     if(flag =='Y'){
        printf("paichi");
     }else{
        printf("ani nai cuz ami dumb");
     }
  
        return 0;
}