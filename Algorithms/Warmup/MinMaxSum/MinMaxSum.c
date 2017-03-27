#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    long long int numbers[5]; 
    scanf("%lld %lld %lld %lld %lld",&numbers[0],&numbers[1],&numbers[2],&numbers[3],&numbers[4]);
    long long int max = numbers[0];
    long long int min = numbers[0];
    long long int sum = 0;
    for(int i = 0; i < 5; i++){
        sum += numbers[i];
        if(numbers[i] > max){
            max = numbers[i];
        }
        if(numbers[i] < min){
            min = numbers[i];
        }
    }
    printf("%lld %lld", (sum-max),(sum-min));
    return 0;
}