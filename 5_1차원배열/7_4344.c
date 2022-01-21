#include <stdio.h>

int main(){
    int c, n, x;
    scanf("%d", &c);
    double avg[n];
    double score;

    for(int i = 0; i < c; i++){
        scanf("%d", &n);
        score = 0;
        for(int j = 0; j < n; j++){
            scanf("%d", &x);
            score += x;
        }
        avg[i] = score/n;
        printf("%lf", avg[i]);
    }
    for(int i = 0; i < c; i++){
        printf("%.3lf", avg[i]);
    }
    return 0;
}