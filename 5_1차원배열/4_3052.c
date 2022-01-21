#include <stdio.h>

int main(){
    int arr[10];
    for(int i = 0; i < 10; i++){
        scanf("%d", &arr[i]);
        arr[i] %= 42;
    }
    int count = 10;
    for(int i = 0; i < 9; i++){
        for (int j = i+1; j < 10; j++){
            if (arr[j]==arr[i]){
                count--;
                break;
            }
        }
    }
    
    printf("%d", count);


}