#include <stdio.h>

int main(){
    int H, M;
    scanf("%d %d", &H, &M);
    if (H == 0 && M < 45) H = 24;
    int time = 60*H + M - 45;
    printf("%d %d\n", time/60, time%60);
}