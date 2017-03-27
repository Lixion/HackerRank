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
    int a[n][n];
    for(int a_i = 0; a_i < n; a_i++){
       for(int a_j = 0; a_j < n; a_j++){
          scanf("%d",&a[a_i][a_j]);
       }
    }
    int first_diag = 0;
    for(int i = 0; i < n; i++){
        first_diag += a[i][i];
    }
    int second_diag = 0;
    int j = 0;
    for(int i = n - 1; i >= 0; i--, j++){
        second_diag += a[j][i];
    }
    printf("%d", abs(second_diag - first_diag));
    return 0;
}