#include <stdio.h>

int main(){
    int arr[9];
    int max, n;
    for (int i = 0; i < 9; i++){
        scanf("%d", &arr[i]);  
    }
    max = arr[0];
    n = 1; //arr[0]이 max일 경우
    for (int i = 1; i < 9; i++){
        if (max < arr[i]) {
            max = arr[i];
            n = i+1;
        }
    }
    printf("%d\n%d\n", max, n);
}