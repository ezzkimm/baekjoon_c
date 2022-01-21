#include <stdio.h>

int main(){
    int n;
    scanf("%d", &n);
    float score[n];
    float avg, m = 0;

    for(int i; i < n; i++){
       scanf("%f", &score[i]);
       if (m < score[i]) m = score[i];
    }
    for(int i; i < n; i++){
        score[i] = score[i]/m *100;
        avg += score[i];
    }
    avg /= n;
    printf("%f\n", avg);


    return 0;
    
}