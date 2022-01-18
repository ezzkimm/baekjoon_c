#include <stdio.h>

int main(){
    int N, N2;
    int ten, one;
    int cycle = 0;
    scanf("%d", &N);
    N2 = N;
    while(1){
        cycle++;
        ten = N2 / 10;
        one = N2 % 10;
        N2 = one*10 + (ten + one)%10;
        printf("%d\n", N2);
        if (N == N2) break;        
    }
    printf("%d", cycle);
}