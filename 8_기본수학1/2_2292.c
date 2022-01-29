#include <stdio.h>

int main(){
    int n;
    scanf("%d", &n);
    int step = 1;
    while (1){
        if (n <=1) break;
        n -= step*6;
        step++;
    }
    printf("%d", step);
}