#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    int n; 
    scanf("%d",&n);
    int arr[n];
    int amountPos = 0;
    int amountNeg = 0;
    int amountZero = 0;
    for(int arr_i = 0; arr_i < n; arr_i++){
       scanf("%d",&arr[arr_i]);
        if(arr[arr_i] >= 0){
            if(arr[arr_i] == 0){
                amountZero++;
            }
            else{
                amountPos++;
            }
        }
        else{
            amountNeg++;
        }
    }
    float posFrac = (amountPos*1.0)/n;
    float negFrac = (amountNeg*1.0)/n;
    float zeroFrac = (amountZero*1.0)/n;
    printf("%.6f\n%.6f\n%.6f", posFrac, negFrac, zeroFrac);
    return 0;
}