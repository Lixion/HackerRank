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
    char str[n];
    strcpy(str, " ");
    for(int i = 1; i < n; i++){
       strcat(str, " ");
    }
    for(int i = n-1; i >= 0; i--){
        str[i] = '#';
        printf("%s", str);
        if(i != 0){
            printf("\n");
        }
    }
    return 0;
}