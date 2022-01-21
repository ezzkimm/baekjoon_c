#include <stdio.h>
#include <stdlib.h>

int main(){
    int n, x, y;
    int num = 0;
    char arr[x];
    scanf("%d", &n);
    scanf("%s", arr);
    for(int i = x-1; i >= 0; i--){
        printf("%c", arr[i]);
        y = atoi(arr[i]);
        num += y;
        printf("%d", num);
    }

    

    return 0;
}