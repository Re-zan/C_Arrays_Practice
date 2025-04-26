#include <stdio.h>

int main() {
    int size;
    scanf("%d", &size);
    int arrray[size];
    
    for (int i = 0; i < size; i++) {
        scanf("%d", &arrray[i]);
    }

    int find_num;
    scanf("%d", &find_num);

    int found = 0;

    for (int i = 0; i < size; i++) {
        if (arrray[i] == find_num) {
            printf("%d\n", i); // print the index
            found = 1;
            break;
        }
    }

  
if(found ==0){
        printf("-1");
}
    return 0;
}
