#include <stdio.h>

int CountPrimes(int num);

int main() {
    int a, n, m, x = 0, count = 0;
     printf("enter n");
    scanf("%d\n", &n); // Assuming n is the number of test cases
    for (int i = 0; i < n; i++) {
        scanf("%d", &m);
        int arr[m]; // Declaring array outside the loop
        for (int j = 0; j < m; j++) {
            scanf("%d", &arr[j]);
              count += CountPrimes(arr[j]);
        }
        printf("Total count of primes: %d\n", count);
    }
    return 0;
}

int CountPrimes(int num) {
    int x =0;
    int count = 0;
    if(num<=1){
        return 0;
    }
    for (int i = 2; i <= num; i++) {
        for (int j = 2; j <= i / 2; j++) {
            if (i % j == 0) {
                x++;}
                   }
            if(x>0){
              count ++;
            } }
}
         

