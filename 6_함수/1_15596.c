#include <stdio.h>

long long sum(int *a, int n){
    long long ans = 0;
    for (int i = 0; i < n; i++) ans += a[i];
    return ans;
}

int main(){
    int  arr[10] = {2, 1, 3, 2, 5, 10, 4, 33, 12, 3};
    printf("%d", sum(arr, 10));
    return 0;

}